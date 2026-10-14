// sub_080A0494 at 0x080A0494 (thumb)

undefined4 sub_080A0494(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if ((*(char *)(param_1 + 0x10) == '\x03') &&
     (0x9000 < *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c))) {
    return in_lr;
  }
  local_c = *(int *)(param_1 + 0x50);
  if (*(int *)(DAT_0202286c + 0x50) <= local_c + 0x6000) {
    bVar1 = *(byte *)(param_1 + 0x12);
    if (bVar1 == 0x6e) {
      local_10 = *(int *)(param_1 + 0x4c) + 0x4000;
      local_c = local_c + -0x3800;
      sub_08074A24(&local_10,0,0);
      sub_0809B340(local_10,local_c,6,0);
    }
    else {
      if (bVar1 < 0x6f) {
        if (bVar1 != 0x6a) goto LAB_080a054a;
        local_10 = *(int *)(param_1 + 0x4c) + 0x4000;
        iVar3 = -0x2800;
      }
      else if (bVar1 == 0xbe) {
        local_10 = *(int *)(param_1 + 0x4c);
        iVar3 = -0x800;
      }
      else {
        if (bVar1 != 0xce) goto LAB_080a054a;
        local_10 = *(int *)(param_1 + 0x4c);
        iVar3 = 0x800;
      }
      local_c = local_c + iVar3;
      sub_08074A24(&local_10,0,0);
      sub_0809B340(local_10,local_c,6,0);
    }
  }
LAB_080a054a:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0x12) = 0xee;
  }
  return in_lr;
}

