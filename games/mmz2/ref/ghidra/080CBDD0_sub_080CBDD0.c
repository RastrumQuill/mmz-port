// sub_080CBDD0 at 0x080CBDD0 (thumb)

undefined4 sub_080CBDD0(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  sub_080032EC(0x2a);
  pcVar1 = &DAT_083493d8;
  iVar2 = 5;
  do {
    local_1c = *pcVar1 * 0x100 + *(int *)(param_1 + 0x54);
    local_18 = pcVar1[1] * 0x100 + *(int *)(param_1 + 0x58);
    sub_080A6970(&local_1c);
    pcVar1 = pcVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return in_lr;
}

