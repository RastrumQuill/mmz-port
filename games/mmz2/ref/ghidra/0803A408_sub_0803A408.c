// sub_0803A408 at 0x0803A408 (thumb)

undefined4 sub_0803A408(int param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  iVar4 = sub_0803A994(param_1,iVar7);
  if (iVar4 != 0) {
LAB_0803a4f8:
    sub_0803A79C(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x1020) == 0) {
    *(undefined *)(param_1 + 0x6b) = 0;
  }
  else if (*(char *)(param_1 + 0x6b) == '\0') {
    sub_080032EC(0x2b);
    *(char *)(param_1 + 0x6b) = '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x68);
  cVar2 = *(char *)(param_1 + 0x71);
  bVar3 = *(byte *)(param_1 + 0x10);
  sub_080EF118(param_1,*(undefined4 *)(&DAT_083375d4 + (uint)bVar3 * 4));
  if (*(char *)(param_1 + 0xc) != '\x01') goto LAB_0803a4f8;
  uVar5 = *(undefined4 *)(iVar7 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  uVar6 = (uint)(*(byte *)(iVar7 + 10) >> 4 & 1);
  if (bVar3 == 4) {
    if (*(char *)(iVar7 + 0xd) == '\x02') goto LAB_0803a4a8;
  }
  else if (*(char *)(iVar7 + 0xd) != '\x02') goto LAB_0803a4a8;
  uVar6 = (uint)(uVar6 == 0);
LAB_0803a4a8:
  if (uVar6 == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(char *)(param_1 + 0x4c) = (char)uVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
  sub_080128D4(param_1);
  if ((*(char *)(param_1 + 0x68) == cVar1) && (*(char *)(param_1 + 0x71) == cVar2)) {
    return in_lr;
  }
  sub_0803AA00(param_1);
  return in_lr;
}

