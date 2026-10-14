// sub_0809FCC0 at 0x0809FCC0 (thumb)

undefined4 sub_0809FCC0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  iVar5 = DAT_0202286c;
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      if (*(char *)(param_1 + 0x13) == '\0') {
        local_1c = *(int *)(param_1 + 0xc4);
        iVar5 = *(int *)(*(int *)(param_1 + 0x20) + 0xb8);
        if (iVar5 + 0xc400 < local_1c) {
          local_1c = iVar5 + 0xe400;
        }
        local_18 = *(int *)(param_1 + 0x50) + 0xf000;
        uVar2 = sub_0809F914(param_1,&local_1c,2,1);
        *(undefined4 *)(param_1 + 0xc0) = uVar2;
      }
      else {
        local_1c = *(int *)(param_1 + 0xc4);
        iVar5 = *(int *)(*(int *)(param_1 + 0x20) + 0xb8);
        if (local_1c < iVar5 + 0x2c00) {
          local_1c = iVar5 + 0xc00;
        }
        local_18 = *(int *)(param_1 + 0x50) + 0xf000;
        uVar2 = sub_0809F914(param_1,&local_1c,1,1);
        *(undefined4 *)(param_1 + 0xbc) = uVar2;
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0xbc) + 0x4c);
      *(int *)(param_1 + 200) = iVar5 + (*(int *)(*(int *)(param_1 + 0xc0) + 0x4c) - iVar5 >> 1);
      *(undefined *)(param_1 + 0x13) = 0;
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    piVar3 = (int *)(param_1 + 0xbc);
    if (*(char *)(*piVar3 + 0xd) == '\x04') {
      *(undefined *)(param_1 + 0x12) = 1;
    }
    piVar4 = (int *)(param_1 + 0xc0);
    if (*(char *)(*piVar4 + 0xd) == '\x04') {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    if ((*(char *)(param_1 + 0x12) == '\0') || (*(char *)(param_1 + 0x13) == '\0')) {
      iVar6 = *piVar3;
      if (((*(ushort *)(iVar6 + 0x90) & 4) == 0) || ((*(ushort *)(*piVar4 + 0x90) & 4) == 0)) {
        if ((((*(byte *)(iVar5 + 0x128) & 1) != 0) &&
            (*(int *)(param_1 + 0x50) + -0x4800 <= *(int *)(iVar5 + 0x50))) &&
           (iVar5 = *piVar3, *(int *)(*piVar4 + 0x4c) - *(int *)(iVar5 + 0x4c) < 0x4600)) {
          *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0x87;
          *(byte *)(*piVar4 + 0xb) = *(byte *)(*piVar4 + 0xb) & 0x87;
          iVar5 = *piVar3;
          *(undefined4 *)(iVar5 + 0x90) = 0;
          *(undefined *)(iVar5 + 0x94) = 0;
          *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
          iVar5 = *piVar4;
          *(undefined4 *)(iVar5 + 0x90) = 0;
          *(undefined *)(iVar5 + 0x94) = 0;
          *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
        }
      }
      else {
        *(byte *)(iVar6 + 0xb) = *(byte *)(iVar6 + 0xb) & 0x87;
        *(byte *)(*piVar4 + 0xb) = *(byte *)(*piVar4 + 0xb) & 0x87;
        iVar5 = *piVar3;
        *(undefined4 *)(iVar5 + 0x90) = 0;
        *(undefined *)(iVar5 + 0x94) = 0;
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
        iVar5 = *piVar4;
        *(undefined4 *)(iVar5 + 0x90) = 0;
        *(undefined *)(iVar5 + 0x94) = 0;
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
        sub_0809F914(param_1,param_1 + 0x4c,3,0);
      }
    }
    else {
      sub_08001EAC(10);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  }
  return in_lr;
}

