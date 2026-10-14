// sub_0809A46C at 0x0809A46C (thumb)

undefined4 sub_0809A46C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 2;
  if ((char)DAT_0202e030 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(byte *)(param_1 + 10) = bVar1 | 6;
    sub_08006DE4(param_1 + 0x74,&DAT_08343650,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    *(byte *)(param_1 + 10) = bVar1 | 6;
    sub_08006DE4(param_1 + 0x74,&DAT_083435a8 + (uint)*(byte *)(param_1 + 0x10) * 0x18,
                 param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
  sub_0809A510(param_1);
  return in_lr;
}

