// sub_080AD810 at 0x080AD810 (thumb)

undefined4 sub_080AD810(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xb8) - 1 == (uint)*(byte *)(param_1 + 0x10)) {
    iVar1 = sub_080AD7DC(param_1);
    iVar2 = *(short *)((int)&DAT_08128c10 + ((uint)((iVar1 + 0x40) * 0x1000000) >> 0x17)) * -0x700;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    iVar2 = *(short *)((int)&DAT_08128c10 + ((uint)(iVar1 << 0x18) >> 0x17)) * -0x700;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar2 >> 8;
    sub_08005784(param_1 + 0x74,&DAT_0885f910);
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0xb4;
    sub_0801CF00(param_1,0x9d03);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08002B10(0x173);
  }
  *(undefined *)(param_1 + 0xb9) = 1;
  return in_lr;
}

