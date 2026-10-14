// sub_080A78D0 at 0x080A78D0 (thumb)

undefined4 sub_080A78D0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
  pbVar4 = (byte *)(param_1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080ef450)[*pbVar4 + 0x40 & 0xff];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + (iVar2 >> 8);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080ef450)[*pbVar4];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + (iVar2 >> 8);
  bVar1 = *pbVar4;
  *pbVar4 = bVar1 + 3;
  if ((byte)(bVar1 + 3) < 3) {
    sub_080032EC(0x100);
  }
  iVar2 = *(int *)(param_1 + 0x5c) + 0x40;
  *(int *)(param_1 + 0x5c) = iVar2;
  if ((0x7800 < iVar2) && (uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54), 0x2000 < uVar3)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  sub_080128D4(param_1);
  return in_lr;
}

