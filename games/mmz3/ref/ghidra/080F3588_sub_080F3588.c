// sub_080F3588 at 0x080F3588 (thumb)

undefined4 sub_080F3588(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x64ac);
  cVar1 = *(char *)(iVar5 + 0xc0);
  if (*(char *)(param_1 + 0xe12) == cVar1) {
    if (*(char *)(iVar5 + 0xe4) != cVar1) {
      *(char *)(iVar5 + 0xe4) = *(char *)(iVar5 + 0xc1);
      return in_lr;
    }
    uVar4 = *(undefined *)(iVar5 + 0xc1);
  }
  else {
    cVar2 = *(char *)(iVar5 + 0xc1);
    cVar3 = *(char *)(param_1 + 0xe13);
    if (cVar3 == cVar2) {
      if (*(char *)(iVar5 + 0xe5) == cVar3) {
        *(char *)(iVar5 + 0xe4) = cVar1;
        return in_lr;
      }
      *(char *)(iVar5 + 0xe5) = cVar1;
      return in_lr;
    }
    if (*(char *)(param_1 + 0xe12) == cVar2) {
      if (cVar3 == cVar1) {
        return in_lr;
      }
      if (*(char *)(iVar5 + 0xe4) == cVar2) {
        *(char *)(iVar5 + 0xe5) = cVar1;
        return in_lr;
      }
      *(char *)(iVar5 + 0xe4) = cVar1;
      return in_lr;
    }
    if (cVar3 == cVar1) {
      if (*(char *)(iVar5 + 0xe4) == cVar3) {
        *(char *)(iVar5 + 0xe5) = cVar2;
        return in_lr;
      }
      *(char *)(iVar5 + 0xe4) = cVar2;
      return in_lr;
    }
    *(char *)(iVar5 + 0xe4) = cVar1;
    uVar4 = *(undefined *)(iVar5 + 0xc1);
  }
  *(undefined *)(iVar5 + 0xe5) = uVar4;
  return in_lr;
}

