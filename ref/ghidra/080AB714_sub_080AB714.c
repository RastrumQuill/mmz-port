// sub_080AB714 at 0x080AB714 (thumb)

undefined4 sub_080AB714(int param_1)

{
  int iVar1;
  undefined uVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0809C930(param_1,*(undefined2 *)(&DAT_082b6660 + (uint)*(byte *)(param_1 + 0x10) * 8));
    sub_0809C980(param_1);
    if (*(char *)(param_1 + 0x10) == '\x04') {
      sub_0800561C(param_1 + 0x74,&DAT_082b6644);
      *(undefined *)(param_1 + 0xe) = 1;
    }
    else {
      sub_0800561C(param_1 + 0x74,&DAT_082b660c);
      *(undefined *)(param_1 + 0xe) = 2;
    }
    break;
  case 1:
    if (((DAT_02022adf & 1) == 0) ||
       (((int)(uint)(byte)(&DAT_02022ad4)[(ushort)L"NOPQRSTU"[*(byte *)(param_1 + 0x11)] >> 3] >>
         ((ushort)L"NOPQRSTU"[*(byte *)(param_1 + 0x11)] & 7) & 1U) != 0)) {
      sub_0809C980(param_1);
      return in_lr;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082b660c);
    sub_0809C930(param_1,0x405);
    *(undefined *)(param_1 + 0xe) = 2;
  case 2:
    if (*(char *)(param_1 + 0xf) == '\0') {
      uVar4 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
      if (uVar4 < 0x3001) {
        *(undefined2 *)(param_1 + 0xba) = 0xff;
        uVar2 = 1;
LAB_080ab834:
        *(undefined *)(param_1 + 0xf) = uVar2;
      }
    }
    else {
      uVar4 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
      if (0x3000 < uVar4) {
        uVar2 = 0;
        goto LAB_080ab834;
      }
    }
    sub_0809C980(param_1);
    if ((DAT_02022b64 & 2) == 0) {
      if ((DAT_02022880 != '\0') || ((DAT_02022b70 & 1) != 0)) {
        if ((*(ushort *)(param_1 + 0x90) & 0x4000) == 0) {
          *(undefined *)(param_1 + 0xe) = 5;
        }
        else {
          sub_0809C930(param_1,*(undefined2 *)(&DAT_082b6662 + (uint)*(byte *)(param_1 + 0x10) * 8))
          ;
          *(undefined *)(param_1 + 0xe) = 3;
        }
      }
    }
    else {
      sub_0800561C(param_1 + 0x74,&DAT_082b6644);
      *(undefined *)(param_1 + 0xe) = 6;
    }
    break;
  case 3:
    sub_0809C980(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if ((*(ushort *)(DAT_0202286c + 0x90) & 0x4000) == 0) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        sub_0809C930(param_1,*(undefined2 *)(&DAT_082b6664 + (uint)*(byte *)(param_1 + 0x10) * 8));
        sub_08001EAC(0x20);
        DAT_02022cb0 = 2;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    break;
  case 4:
    sub_0809C980(param_1);
    if (DAT_02022cb0 == 0) {
      DAT_02022880 = '\0';
      DAT_02022cb0 = 1;
      piVar5 = (int *)sub_0800F854(param_1 + 0x4c);
      ppiVar7 = (int **)(param_1 + 0xc0);
      *ppiVar7 = piVar5;
      iVar1 = DAT_0202286c;
      if (piVar5 != (int *)0x0) {
        *(int *)(DAT_0202286c + 0x4c) = *piVar5;
        *(int *)(iVar1 + 0x50) = (*ppiVar7)[1];
        iVar6 = sub_080C8B68(**ppiVar7 >> 8,0xf0);
        if (iVar6 < 0x78) {
          *(undefined *)(iVar1 + 0x44) = 1;
          bVar3 = *(byte *)(DAT_0202286c + 10) | 0x10;
        }
        else {
          *(undefined *)(iVar1 + 0x44) = 0;
          bVar3 = *(byte *)(DAT_0202286c + 10) & 0xef;
        }
        *(byte *)(DAT_0202286c + 10) = bVar3;
        sub_08028F3C(DAT_0202286c);
        DAT_02022c5d = 8;
        DAT_02022c66 = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    break;
  case 5:
    if ((DAT_02022880 == '\0') && (bVar3 = (byte)DAT_02022b70 & 1, (DAT_02022b70 & 1) == 0)) {
      if (((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) + 0x2000U < 0x4001) &&
         ((*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) + 0x2000U < 0x4001)) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(byte *)(param_1 + 0xf) = bVar3;
        *(byte *)(param_1 + 0xe) = bVar3;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    break;
  case 6:
    bVar3 = (byte)DAT_02022b64;
    if ((DAT_02022b64 & 2) == 0) {
      sub_0800561C(param_1 + 0x74,&DAT_082b660c);
      *(byte *)(param_1 + 0xe) = bVar3 & 2;
    }
  }
  return in_lr;
}

