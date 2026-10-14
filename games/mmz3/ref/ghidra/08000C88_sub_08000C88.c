// sub_08000C88 at 0x08000C88 (thumb)

undefined4 sub_08000C88(void)

{
  bool bVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int unaff_r5;
  int unaff_r6;
  char cVar6;
  int local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar2 = 0;
  iVar3 = 4;
  do {
    local_24 = local_24 + 1;
    cVar6 = local_24 == 0;
    sub_08000E94(local_24,iVar2);
    if (cVar6 == '\0') {
      iVar2 = extraout_r1;
      if (iVar3 == 4) {
        local_20 = extraout_r1;
        iVar2 = local_1c;
      }
      local_1c = iVar2;
      iVar3 = iVar3 + 4;
    }
    iVar2 = extraout_r1 + 2;
  } while (iVar2 < 8);
  puVar4 = *(undefined2 **)(unaff_r6 + 0x38);
  puVar5 = *(undefined2 **)(unaff_r6 + 0x3c);
  iVar2 = *(int *)(unaff_r6 + 0x20);
  do {
    *puVar4 = *(undefined2 *)(unaff_r5 + local_20);
    *puVar5 = *(undefined2 *)(unaff_r5 + local_1c);
    unaff_r5 = unaff_r5 + 8;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    iVar3 = iVar2 + -2;
    bVar1 = 1 < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return 0;
}

