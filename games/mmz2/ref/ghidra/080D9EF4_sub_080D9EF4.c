// sub_080D9EF4 at 0x080D9EF4 (thumb)

undefined4 sub_080D9EF4(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar5 = sub_080DABF4();
  iVar9 = *(int *)(iVar5 + 0x10);
  bVar1 = sub_08037C20(iVar9);
  uVar6 = (uint)*(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x12) == '\0') {
    if ((*(byte *)(iVar5 + 4) == uVar6) && (*(char *)(iVar5 + 1) == '\x01')) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0x11) = bVar1 - 1;
      cVar2 = sub_08037C34(iVar9);
      sub_080127E4(param_1,*(undefined2 *)(&DAT_0834b900 + cVar2 * 2));
      if ((int)cVar2 == (uint)*(byte *)(iVar9 + 0x212 + uVar6)) {
        bVar4 = *(byte *)(param_1 + 0x49);
        bVar3 = 4;
      }
      else {
        bVar4 = *(byte *)(param_1 + 0x49);
        bVar3 = 8;
      }
      *(byte *)(param_1 + 0x49) = bVar4 & 0xf3 | bVar3;
      iVar9 = bVar1 - 1;
      if (iVar9 != 0) {
        iVar7 = param_1;
        do {
          iVar7 = sub_080EF11C(iVar5,iVar7,*(undefined4 *)(&DAT_0834ba0c + uVar6 * 4));
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      sub_080DA064(param_1);
    }
    else {
      sub_080127E4(param_1,*(undefined2 *)
                            (&DAT_0834b900 + (uint)*(byte *)(iVar9 + 0x212 + uVar6) * 2));
      if ((DAT_0202ebb4 & 2) == 0) {
        puVar8 = &DAT_0834b954;
      }
      else {
        puVar8 = &DAT_0834b93c;
      }
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(puVar8 + uVar6 * 8);
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(byte *)(param_1 + 0x11) = (bVar1 - *(char *)(param_1 + 0x12)) + -1;
    cVar2 = sub_08037C34(iVar9);
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0834b900 + cVar2 * 2));
    if ((int)cVar2 == (uint)*(byte *)(iVar9 + 0x212 + uVar6)) {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar4 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar4 = 8;
    }
    *(byte *)(param_1 + 0x49) = bVar1 & 0xf3 | bVar4;
    sub_080DA064(param_1);
  }
  return in_lr;
}

