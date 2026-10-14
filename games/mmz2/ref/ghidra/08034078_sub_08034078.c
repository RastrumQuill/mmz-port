// sub_08034078 at 0x08034078 (thumb)

undefined8 sub_08034078(int param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 3;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 1;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 1;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_0801EA38(param_1,0x3b,0,param_2);
  uVar1 = 0;
  if (*(char *)(param_1 + 0x1fc) != '\x05') {
    uVar1 = 0xff;
  }
  *(undefined *)(param_1 + 0x2b8) = uVar1;
  return CONCAT44(in_lr,3);
}

