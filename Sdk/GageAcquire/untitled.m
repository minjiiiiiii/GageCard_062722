fileID = fopen('Acquire_CH1.txt');
for i =1:12, buffer= fgetl(fileID); end
fclose(fileID);
