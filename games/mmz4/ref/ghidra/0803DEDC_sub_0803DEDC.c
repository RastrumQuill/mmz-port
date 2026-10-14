// sub_0803DEDC at 0x0803DEDC (thumb)

undefined4 sub_0803DEDC(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0803DE30(param_1);
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != '\0') {
          return in_lr;
        }
        *(undefined *)(iVar4 + 0x154) = 3;
        *(undefined *)(param_1 + 0x12) = 0x10;
      }
      else {
        if (bVar1 != 3) {
          return in_lr;
        }
        cVar2 = sub_0803DE30(param_1);
        if (cVar2 != '\0') {
          *(undefined *)(param_1 + 0x12) = 1;
          return in_lr;
        }
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != '\0') {
          return in_lr;
        }
        *(undefined *)(iVar4 + 0x154) = 4;
      }
      goto LAB_0803dfde;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0x5f00);
    if (*(char *)(param_1 + 0x11) == '\x02') {
      uVar3 = *(ushort *)(iVar4 + 200);
      if ((uVar3 & 1) == 0) {
        if ((uVar3 & 2) == 0) {
          if ((uVar3 & 4) != 0) {
            cVar2 = '\x04';
            goto LAB_0803df50;
          }
          uVar3 = uVar3 & 8;
          cVar2 = '\x05';
        }
        else {
          uVar3 = (ushort)*(byte *)(iVar4 + 0x165);
          cVar2 = '\x06';
        }
        if (uVar3 == 0) goto LAB_0803df4e;
      }
      else {
        cVar2 = '\x03';
      }
    }
    else {
LAB_0803df4e:
      cVar2 = *(char *)(param_1 + 0x11);
    }
LAB_0803df50:
    if (cVar2 != '\x06') {
      sub_0803B2B0(iVar4,param_1);
    }
    *(undefined *)(iVar4 + 0x154) = 0;
    *(undefined *)(param_1 + 0x12) = 2;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_0803DE30(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  *(undefined *)(iVar4 + 0x154) = 1;
  *(undefined *)(param_1 + 0x12) = 4;
LAB_0803dfde:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

