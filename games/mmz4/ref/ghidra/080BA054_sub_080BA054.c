// sub_080BA054 at 0x080BA054 (thumb)

undefined4 sub_080BA054(int param_1)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    pbVar3 = (byte *)(*(int *)(param_1 + 0x28) + 0xbf);
    *pbVar3 = *pbVar3 | 4;
    sub_08005784(param_1 + 0x74,&DAT_08860f64);
    DAT_02000a40 = 0x3f10;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    sub_0801CF00(param_1,0xbf00);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  iVar2 = (int)*(short *)((int)&DAT_08128c10 + (((uint)*(byte *)(param_1 + 0x12) << 0x19) >> 0x17));
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  iVar2 = (int)*(short *)((int)&DAT_08128c10 + ((uint)((iVar2 >> 2) << 0x18) >> 0x17));
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  uVar1 = (ushort)(iVar2 >> 4);
  DAT_02000a42 = uVar1 & 0x1f | (0x10 - uVar1) * 0x100;
  if (cVar4 == '\0') {
    DAT_02000a40 = 0;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

