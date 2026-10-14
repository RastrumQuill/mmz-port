// sub_080A4AA4 at 0x080A4AA4 (thumb)

undefined4 sub_080A4AA4(int param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 in_lr;
  bool bVar5;
  
  iVar1 = DAT_0202dbf0;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x40);
    sub_080A50FC(param_1);
    sub_08005784(param_1 + 0x74,&DAT_0885ec64);
    *(undefined *)(param_1 + 0x25) = 0xf;
    sub_0801CF00(param_1,0x2200);
    *(undefined4 *)(param_1 + 0xb8) = 300;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  puVar4 = (uint *)(param_1 + 0xb8);
  uVar3 = *puVar4 - 1;
  *puVar4 = uVar3;
  if ((((*(uint *)(param_1 + 0x8c) & 0x800) == 0) || (iVar1 == 0)) ||
     (bVar5 = (*(uint *)(iVar1 + 0x8c) & 1) != 0, bVar5 || uVar3 == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_080A4E3C(param_1);
    return in_lr;
  }
  *(undefined *)(iVar1 + 0x171) = 1;
  *(bool *)(iVar1 + 0x172) = bVar5 || uVar3 == 0;
  uVar3 = *puVar4;
  if ((int)uVar3 < 0x4b) {
    if ((uVar3 & 1) != 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080a4b9c;
    }
  }
  else if ((uVar3 & 3) != 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
    goto LAB_080a4b9c;
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080a4b9c:
  *(byte *)(param_1 + 10) = bVar2;
  iVar1 = DAT_0202dbf0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202dbf0 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
  return in_lr;
}

