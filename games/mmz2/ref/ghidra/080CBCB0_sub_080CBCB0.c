// sub_080CBCB0 at 0x080CBCB0 (thumb)

undefined4 sub_080CBCB0(int param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  int local_18;
  
  sub_080032EC(0x35);
  local_18 = 0;
  iVar1 = (param_2 & 0xff) * 6;
  pcVar3 = &DAT_083493cd + iVar1;
  pcVar2 = &DAT_083493cc + iVar1;
  do {
    local_20 = *pcVar2 * 0x100 + *(int *)(param_1 + 0x54);
    local_1c = *pcVar3 * 0x100 + *(int *)(param_1 + 0x58);
    sub_080AC60C(1,&local_20);
    pcVar3 = pcVar3 + 2;
    pcVar2 = pcVar2 + 2;
    local_18 = local_18 + 1;
  } while (local_18 < 3);
  return in_lr;
}

