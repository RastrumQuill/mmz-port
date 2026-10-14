// sub_080DD9A4 at 0x080DD9A4 (thumb)

undefined4 sub_080DD9A4(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  piVar5 = (int *)sub_080DE178();
  iVar8 = *piVar5;
  bVar1 = sub_08037C20(iVar8);
  uVar6 = (uint)*(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x12) == '\0') {
    if ((*(byte *)((int)piVar5 + 7) == uVar6) && (*(char *)((int)piVar5 + 6) != '\0')) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0x11) = bVar1 - 1;
      cVar2 = sub_08037C34(iVar8);
      sub_080127E4(param_1,*(undefined2 *)(&DAT_0834c3e8 + cVar2 * 2));
      if ((int)cVar2 == (uint)*(byte *)(iVar8 + 0x212 + uVar6)) {
        bVar4 = *(byte *)(param_1 + 0x49);
        bVar3 = 4;
      }
      else {
        bVar4 = *(byte *)(param_1 + 0x49);
        bVar3 = 8;
      }
      *(byte *)(param_1 + 0x49) = bVar4 & 0xf3 | bVar3;
      iVar8 = bVar1 - 1;
      if (iVar8 != 0) {
        iVar7 = param_1;
        do {
          iVar7 = sub_080EF11C(piVar5,iVar7,*(undefined4 *)(&DAT_0834c440 + uVar6 * 4));
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      sub_080DDAFC(param_1);
    }
    else {
      sub_080127E4(param_1,*(undefined2 *)
                            (&DAT_0834c3e8 + (uint)*(byte *)(iVar8 + 0x212 + uVar6) * 2));
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&DAT_0834c3f8 + uVar6 * 8);
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(byte *)(param_1 + 0x11) = (bVar1 - *(char *)(param_1 + 0x12)) + -1;
    cVar2 = sub_08037C34(iVar8);
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0834c3e8 + cVar2 * 2));
    if ((int)cVar2 == (uint)*(byte *)(iVar8 + 0x212 + uVar6)) {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar4 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar4 = 8;
    }
    *(byte *)(param_1 + 0x49) = bVar1 & 0xf3 | bVar4;
    sub_080DDAFC(param_1);
  }
  return in_lr;
}

