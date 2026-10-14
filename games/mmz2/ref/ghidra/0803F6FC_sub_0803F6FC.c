// sub_0803F6FC at 0x0803F6FC (thumb)

undefined4 sub_0803F6FC(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0x13) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0) {
      if ((*(char *)(param_1 + 0xc) != '\0') &&
         (cVar1 = sub_0803F880(param_1,*(undefined4 *)(param_1 + 0x54),
                               *(undefined4 *)(param_1 + 0x58)), cVar1 != '\0')) {
        if ('\0' < cVar1) {
          sub_080AD254(0,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                       0 < *(int *)(param_1 + 0x5c));
        }
        sub_0803F7C4(param_1);
        return in_lr;
      }
    }
    else {
      sub_080AC670(4,param_1 + 0x54,~*(uint *)(param_1 + 0x5c) >> 0x1f,0);
      iVar3 = *(int *)(param_1 + 0x5c);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      iVar2 = *(int *)(param_1 + 0x60);
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar3 < iVar2) {
        *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      }
      else {
        *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
      }
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      sub_080032EC(0x2b);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  else {
    sub_0803F7C4(param_1);
  }
  return in_lr;
}

