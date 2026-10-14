// sub_080F6050 at 0x080F6050 (thumb)

undefined4 sub_080F6050(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(int *)(param_1 + 0x54) < 0x1c2000) {
    sub_0801CF00(param_1,0x4b00);
  }
  else {
    sub_0801CF00(param_1,0x7e00);
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &UNK_08866cd0 + (uint)*(byte *)(param_1 + 0x10) * 8;
  *(undefined2 *)(param_1 + 0x26) = 0x2001;
  iVar1 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1000);
  *(int *)(param_1 + 0x54) = iVar1 + 0x1000;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080F6414(param_1,*(undefined *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xe) = *(undefined *)(param_1 + 0xe);
  sub_080F5EB0(param_1);
  return in_lr;
}

