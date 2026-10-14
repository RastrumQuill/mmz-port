// sub_080723F0 at 0x080723F0 (thumb)

undefined4 sub_080723F0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127D0(param_1);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_0833f044 + (uint)*(byte *)(param_1 + 0x10) * 2));
  *(undefined *)(param_1 + 0xb4) = 0;
  if (*(char *)(param_1 + 0x10) == '\x04') {
    iVar4 = *(int *)(param_1 + 0x28);
    bVar1 = *(byte *)(iVar4 + 10) >> 4;
    uVar3 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    uVar2 = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x40;
      *(undefined4 *)(param_1 + 100) = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffc0;
      *(undefined4 *)(param_1 + 100) = 1;
    }
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar5 + 0x1c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080724BC(param_1);
  return in_lr;
}

