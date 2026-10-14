// sub_080DDC64 at 0x080DDC64 (thumb)

undefined4 sub_080DDC64(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  piVar4 = (int *)sub_080DE178();
  iVar6 = *piVar4;
  bVar1 = sub_08037C5C(iVar6);
  uVar5 = (uint)bVar1;
  if (*(char *)(param_1 + 0x12) == '\0') {
    if ((*(char *)((int)piVar4 + 7) == '\x02') && (*(char *)((int)piVar4 + 6) != '\0')) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0x11) = bVar1 - 1;
      cVar2 = sub_08037C84(iVar6);
      sub_080127E4(param_1,*(undefined2 *)(&DAT_0834c3f0 + cVar2 * 2));
      if ((int)cVar2 == (uint)*(byte *)(iVar6 + 0x215)) {
        bVar1 = *(byte *)(param_1 + 0x49);
        bVar3 = 4;
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x49);
        bVar3 = 8;
      }
      *(byte *)(param_1 + 0x49) = bVar1 & 0xf3 | bVar3;
      iVar6 = param_1;
      while (uVar5 = uVar5 - 1, uVar5 != 0) {
        iVar6 = sub_080DE0BC(piVar4,iVar6);
      }
      sub_080DDD90(param_1);
    }
    else {
      sub_080127E4(param_1,*(undefined2 *)(&DAT_0834c3f0 + (uint)*(byte *)(iVar6 + 0x215) * 2));
      *(undefined4 *)(param_1 + 0x54) = 0x4400;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(byte *)(param_1 + 0x11) = (bVar1 - *(char *)(param_1 + 0x12)) + -1;
    cVar2 = sub_08037C84(iVar6);
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0834c3f0 + cVar2 * 2));
    if ((int)cVar2 == (uint)*(byte *)(iVar6 + 0x215)) {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar3 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar3 = 8;
    }
    *(byte *)(param_1 + 0x49) = bVar1 & 0xf3 | bVar3;
    sub_080DDD90(param_1);
  }
  return in_lr;
}

