// sub_0807A484 at 0x0807A484 (thumb)

undefined4 sub_0807A484(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x3701);
    if (*(char *)(param_1 + 0x10) == '\x02') {
      sub_08012CA4(param_1,7);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = *(char *)(iVar3 + 0xd);
  if ((cVar1 == '\t') || (cVar1 == '\x12')) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  else {
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + *(int *)(iVar2 + 0xb4);
    *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + *(int *)(iVar2 + 0xb8);
  }
  return in_lr;
}

