// sub_0803BDCC at 0x0803BDCC (thumb)

undefined4 sub_0803BDCC(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  iVar5 = sub_0803C3DC(param_1,iVar9);
  if (iVar5 != 0) {
LAB_0803bece:
    sub_0803C258(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x1020) == 0) {
    *(undefined *)(param_1 + 0x6b) = 0;
  }
  else if (*(char *)(param_1 + 0x6b) == '\0') {
    sub_080032EC(0x2b);
    *(char *)(param_1 + 0x6b) = '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x10);
  cVar2 = *(char *)(param_1 + 0x66);
  cVar3 = *(char *)(param_1 + 0x71);
  uVar6 = sub_0803C408(param_1,iVar9);
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833869c + uVar6 * 4));
  if (*(char *)(param_1 + 0xc) != '\x01') goto LAB_0803bece;
  uVar7 = *(undefined4 *)(iVar9 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  uVar8 = (uint)(*(byte *)(iVar9 + 10) >> 4 & 1);
  if (uVar6 == 4) {
    if (*(char *)(iVar9 + 0xd) == '\x02') goto LAB_0803be78;
  }
  else if (*(char *)(iVar9 + 0xd) != '\x02') goto LAB_0803be78;
  uVar8 = (uint)(uVar8 == 0);
LAB_0803be78:
  if (uVar8 == 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(char *)(param_1 + 0x4c) = (char)uVar8;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
  sub_080128D4(param_1);
  if (((uVar6 == bVar1) && (*(char *)(param_1 + 0x66) == cVar2)) &&
     (*(char *)(param_1 + 0x71) == cVar3)) {
    return in_lr;
  }
  sub_0803C49C(param_1);
  return in_lr;
}

