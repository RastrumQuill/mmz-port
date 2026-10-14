// sub_0805671C at 0x0805671C (thumb)

undefined4 sub_0805671C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      if ((*(uint *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x20) + 0xbc) & 0x400) == 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar2 != '\0') {
    sub_0808827C(2,param_1 + 0x4c);
    sub_08001EAC(2);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

