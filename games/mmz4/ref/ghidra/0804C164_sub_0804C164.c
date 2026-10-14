// sub_0804C164 at 0x0804C164 (thumb)

undefined4 sub_0804C164(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined *)(param_1 + 0x22) = 0;
  sub_0801CF00(param_1,1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088541e8,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar1 = -(uint)*(byte *)(param_1 + 0x12) + 0x10;
  if (iVar1 < 0) {
    iVar1 = -(uint)*(byte *)(param_1 + 0x12) + 0x13;
  }
  sub_08005794(param_1 + 0x74,&DAT_088541e8,0xffffffff,0xffffffff,0xffffffff,(iVar1 >> 2) + 1);
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x11) + 0x40) * 0x1000000 >> 0x17)
                      ) << 1;
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x11)] << 1;
  *(undefined *)(param_1 + 0x12) = 0x18;
  *(undefined *)(param_1 + 0xbd) = 0;
  sub_0804C078(param_1);
  return in_lr;
}

