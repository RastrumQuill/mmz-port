// sub_0803499C at 0x0803499C (thumb)

undefined8 sub_0803499C(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined *)(param_1 + 0x17d);
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 3;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 2;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 1;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = uVar1;
  sub_0801EA38(param_1,(&DAT_08335de2)[*(byte *)(param_1 + 0xd)],(int)*(char *)(param_1 + 0x71),
               (int)*(char *)(param_1 + 0x72));
  return CONCAT44(in_lr,3);
}

