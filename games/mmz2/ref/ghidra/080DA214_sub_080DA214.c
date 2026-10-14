// sub_080DA214 at 0x080DA214 (thumb)

undefined4 sub_080DA214(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar4 = sub_080DABF4();
  iVar7 = *(int *)(iVar4 + 0x10);
  bVar1 = sub_08037C5C(iVar7);
  uVar6 = (uint)bVar1;
  if (*(char *)(param_1 + 0x12) == '\0') {
    if ((*(char *)(iVar4 + 4) == '\x02') && (*(char *)(iVar4 + 1) == '\x01')) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0x11) = bVar1 - 1;
      cVar2 = sub_08037C84(iVar7);
      sub_080127E4(param_1,*(undefined2 *)(&DAT_0834b908 + cVar2 * 2));
      if ((int)cVar2 == (uint)*(byte *)(iVar7 + 0x215)) {
        bVar1 = *(byte *)(param_1 + 0x49);
        bVar3 = 4;
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x49);
        bVar3 = 8;
      }
      *(byte *)(param_1 + 0x49) = bVar1 & 0xf3 | bVar3;
      iVar7 = param_1;
      while (uVar6 = uVar6 - 1, uVar6 != 0) {
        iVar7 = sub_080DA860(iVar4,iVar7);
      }
      sub_080DA358(param_1);
    }
    else {
      sub_080127E4(param_1,*(undefined2 *)(&DAT_0834b908 + (uint)*(byte *)(iVar7 + 0x215) * 2));
      if ((DAT_0202ebb4 & 2) == 0) {
        puVar5 = &DAT_0834b954;
      }
      else {
        puVar5 = &DAT_0834b93c;
      }
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(puVar5 + 0x10);
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(byte *)(param_1 + 0x11) = (bVar1 - *(char *)(param_1 + 0x12)) + -1;
    cVar2 = sub_08037C84(iVar7);
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0834b908 + cVar2 * 2));
    if ((int)cVar2 == (uint)*(byte *)(iVar7 + 0x215)) {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar3 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar3 = 8;
    }
    *(byte *)(param_1 + 0x49) = bVar1 & 0xf3 | bVar3;
    sub_080DA358(param_1);
  }
  return in_lr;
}

