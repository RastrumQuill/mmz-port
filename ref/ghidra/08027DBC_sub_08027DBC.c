// sub_08027DBC at 0x08027DBC (thumb)

undefined4 sub_08027DBC(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = sub_080280FC();
  if ((*(char *)(iVar3 + 0xd) == '\x01') || (*(char *)(param_1 + 0x10) != *(char *)(iVar3 + 0x10)))
  {
    sub_08027E98(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x50);
    bVar2 = *(byte *)(iVar3 + 10) >> 4;
    *(byte *)(param_1 + 0x44) = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    cVar1 = *(char *)(iVar3 + 0x71);
    bVar2 = *(byte *)(param_1 + 0x13);
    if ((int)cVar1 != (uint)bVar2) {
      *(char *)(param_1 + 0x13) = cVar1;
      iVar3 = *(int *)((uint)bVar2 * 4 + *(int *)(param_1 + 0x5c));
      if (*(int *)(cVar1 * 4 + *(int *)(param_1 + 0x5c)) == 0) {
        if ((iVar3 == 0) || (0x1f < *(byte *)(param_1 + 0x10))) {
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        }
        else {
          sub_08027E98(param_1);
        }
      }
      else if (iVar3 == 0) {
        uVar4 = sub_08028574(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_080055FC(param_1 + 0x74,uVar4,param_1 + 0x4c,0);
        *(int *)(param_1 + 0xb4) = param_1;
        *(undefined4 *)(param_1 + 0xb0) = 0x80285ad;
      }
      else {
        uVar4 = sub_08028574(param_1);
        sub_0800561C(param_1 + 0x74,uVar4);
      }
    }
  }
  return in_lr;
}

