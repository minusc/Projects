library(ggplot2)
library(reshape2) #this library is "melts" the matrix 

matrix_int <- read.csv(filepath="matrix.csv", sep = ",", row.names=1) #sep defines the separator in the csv file: comma or tab ',' '\t'


cor_map <- cor(matrix_int,matrix_int,use = "complete.obs", method = "pearson")
#phi coefficient from Pearson works best for binary matrix


#melt the correlation matrix
#melting is used to create a 3 column matrix: column 1 is x, column 2 is y and column 3 is the value at that positions
molten_core<-reshape2:::melt.matrix(m,id= c("IDs","Feature"),na.rm = TRUE)


#Heatmap
ggplot(data = molten_core, aes(x = Var1, y = Var2, fill = value)) + ggtitle("Correlation map")+ 
  geom_tile() + theme(
    plot.title=element_text(color = "black", size = 14, face = 'bold'),
    axis.title.x=element_blank(),
    axis.text.x=element_blank(),
    axis.ticks.x=element_blank(),
    
    axis.title.y=element_blank(),
    axis.text.y=element_blank(),#text(angle =70, vjust = 0.6), <-- this shows the tag for each label at a 70 degree angle
    axis.ticks.y=element_blank())+
    scale_fill_gradient2(low ='white', high ='#344f96',mid = "#61c0bf", 
                       midpoint = 0.5, space = "Lab",
                       limit = c(0,1))# + coord_fixed(ratio = 5/5)

