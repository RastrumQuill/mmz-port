// sub_080A06C4 at 0x080A06C4 (thumb)

undefined4 sub_080A06C4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_1 + 0x4c);
  local_c = *(undefined4 *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
  sub_0809C980(param_1);
  if (*(int *)(DAT_0202286c + 0x50) <= *(int *)(param_1 + 0x50) + 0x6000) {
    bVar1 = *(byte *)(param_1 + 0x12);
    if (bVar1 == 0x20) {
      iVar3 = 0x800;
    }
    else {
      if (bVar1 < 0x21) {
        if (bVar1 == 0x10) {
          local_10 = local_10 + 0x1800;
          sub_08074A24(&local_10,1,0);
        }
        goto LAB_080a075e;
      }
      if (bVar1 == 0x30) {
        iVar3 = -0x800;
      }
      else {
        if (bVar1 != 0x40) goto LAB_080a075e;
        iVar3 = -0x1800;
      }
    }
    local_10 = local_10 + iVar3;
    sub_08074A24(&local_10,1,0);
  }
LAB_080a075e:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

