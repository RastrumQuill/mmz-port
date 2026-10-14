// sub_0809EAB0 at 0x0809EAB0 (thumb)

undefined4 sub_0809EAB0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_08012738();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x3d00);
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar1 = *(byte *)(iVar5 + 10) >> 4;
    uVar4 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = *(int *)(iVar5 + 0x54) + *(int *)(&DAT_08343dd8 + (uint)*(byte *)(param_1 + 0x10) * 4)
      ;
      goto LAB_0809eb92;
    }
  }
  else {
    uVar4 = ~(uint)(*(byte *)(iVar5 + 10) >> 4) & 1;
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(iVar5 + 0x54) + *(int *)(&DAT_08343dd8 + (uint)*(byte *)(param_1 + 0x10) * 4)
      ;
      goto LAB_0809eb92;
    }
  }
  iVar3 = *(int *)(iVar5 + 0x54) - *(int *)(&DAT_08343dd8 + (uint)*(byte *)(param_1 + 0x10) * 4);
LAB_0809eb92:
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x1800;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar2 = 0x200;
  }
  else {
    uVar2 = 0xfffffe00;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(undefined2 *)(param_1 + 0x52) = 0x10;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809EBF0(param_1);
  return in_lr;
}

