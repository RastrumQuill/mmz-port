// sub_08037CF4 at 0x08037CF4 (thumb)

/* WARNING: Type propagation algorithm not settling */

undefined4 sub_08037CF4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  undefined *puStack_38;
  uint local_34 [2];
  undefined **local_2c;
  int local_28;
  int local_24;
  
  local_2c = &puStack_38 + 1;
  local_28 = param_1 + 0x2b4;
  pcVar4 = (char *)(param_1 + 0x214);
  puVar3 = &local_2c;
  cVar1 = *(char *)(param_1 + 0x2b5);
  iVar5 = 8;
  do {
    pcVar4 = pcVar4 + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = 1;
    if (cVar1 != *pcVar4) {
      do {
        iVar2 = *(int *)((int)&puStack_38 + iVar5);
        if (iVar2 < 0) break;
        iVar2 = iVar2 + -1;
        *(int *)((int)&puStack_38 + iVar5) = iVar2;
      } while (*(char *)(local_28 + iVar2) != *pcVar4);
    }
    iVar5 = iVar5 + -4;
    if ((undefined **)puVar3 == &puStack_38 + 1) {
      local_24 = local_28;
      if ((int)local_34[0] < 0) {
        if ((int)local_34[1] < 0) {
          local_2c = &puStack_38 + 1;
          sub_08037CC8(param_1);
          return in_lr;
        }
        local_34[0] = (uint)(local_34[1] == 0);
      }
      else if ((int)local_34[1] < 0) {
        local_34[1] = (uint)(local_34[0] == 0);
      }
      *(undefined *)(local_34[0] + local_28) = *(undefined *)(param_1 + 0x212);
      *(undefined *)(local_34[1] + local_28) = *(undefined *)(param_1 + 0x213);
      sub_0801E054(*(undefined *)(param_1 + 0x215));
      return in_lr;
    }
  } while( true );
}

