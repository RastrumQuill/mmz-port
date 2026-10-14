// sub_0801C610 at 0x0801C610 (thumb)

/* WARNING: Type propagation algorithm not settling */

undefined4 sub_0801C610(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 in_lr;
  undefined *puStack_3c;
  uint local_38;
  uint local_34;
  undefined **local_30;
  undefined **local_2c;
  char *local_28;
  char *local_24;
  
  local_30 = &puStack_3c + 1;
  local_2c = &puStack_3c + 1;
  local_24 = (char *)(param_1 + 0x18c);
  puVar3 = &local_34 + 1;
  cVar1 = *(char *)(param_1 + 0x113);
  iVar4 = 8;
  do {
    local_24 = local_24 + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = 1;
    if (cVar1 != *local_24) {
      do {
        iVar2 = *(int *)((int)&puStack_3c + iVar4) + -1;
        *(int *)((int)&puStack_3c + iVar4) = iVar2;
        local_28 = local_24;
        if (*(char *)(param_1 + 0x112 + iVar2) == *local_24) break;
      } while (-1 < iVar2);
    }
    iVar4 = iVar4 + -4;
    if ((undefined **)puVar3 == &puStack_3c + 1) {
      if ((int)local_38 < 0) {
        if ((int)local_34 < 0) {
          local_30 = &puStack_3c + 1;
          local_2c = &puStack_3c + 1;
          sub_0801C5E8(param_1);
          return in_lr;
        }
        local_38 = (uint)(local_34 == 0);
      }
      else if ((int)local_34 < 0) {
        local_34 = (uint)(local_38 == 0);
      }
      *(undefined *)(local_38 + param_1 + 0x112) = *(undefined *)(param_1 + 0x18a);
      *(undefined *)(local_34 + param_1 + 0x112) = *(undefined *)(param_1 + 0x18b);
      sub_080159A4(*(undefined *)(param_1 + 0x19d));
      return in_lr;
    }
  } while( true );
}

