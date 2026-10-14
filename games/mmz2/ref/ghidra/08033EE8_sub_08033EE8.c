// sub_08033EE8 at 0x08033EE8 (thumb)

undefined8 sub_08033EE8(int param_1,undefined param_2)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 3;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 1;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 1;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  if (*(short *)(param_1 + 0x174) == 0) {
    sub_0801E9FC(param_1,0x35);
  }
  else {
    sub_0801EA38(param_1,0x35,0,1);
  }
  *(undefined *)(param_1 + 0x2b9) = param_2;
  return CONCAT44(in_lr,3);
}

