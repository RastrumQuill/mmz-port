// sub_08088574 at 0x08088574 (thumb)

undefined4 sub_08088574(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    cVar2 = *(char *)(param_1 + 0x10);
    if (cVar2 != '\0') {
      cVar2 = ' ';
    }
    *(char *)(param_1 + 0x12) = cVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 3) == 0) {
      iVar4 = *(int *)(param_1 + 0x58) + 0x80;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x58) + -0x80;
    }
    *(int *)(param_1 + 0x58) = iVar4;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 == 0) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    iVar4 = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x58) = iVar4;
    sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar4 + -0x2a00);
    if (sVar3 != 0) {
      cVar2 = '\x01';
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        cVar2 = -1;
      }
      if (*(char *)(param_1 + 0x10) == '\0') {
        iVar4 = (int)cVar2;
        local_28 = *(int *)(param_1 + 0x54) + iVar4 * 0x200;
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        local_24 = *(int *)(param_1 + 0x58) - ((uVar5 * 2 >> 0x11 & 0x7ff) + 0x2800);
        sub_080AC60C(1,&local_28);
        local_28 = *(int *)(param_1 + 0x54) + iVar4 * 0x1600;
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        local_24 = *(int *)(param_1 + 0x58) - ((uVar5 * 2 >> 0x11 & 0x7ff) + 0x3200);
        sub_080AC60C(1,&local_28);
        local_28 = *(int *)(param_1 + 0x54) + iVar4 * 0x2800;
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        local_24 = *(int *)(param_1 + 0x58) - ((uVar5 * 2 >> 0x11 & 0x7ff) + 0x2800);
        sub_080AC60C(1,&local_28);
        local_28 = *(int *)(param_1 + 0x54) + iVar4 * 0x1000;
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        local_24 = *(int *)(param_1 + 0x58) - ((uVar5 * 2 >> 0x11 & 0x7ff) + 0x2000);
        sub_080AC60C(2,&local_28);
        local_28 = *(int *)(param_1 + 0x54) + iVar4 * 0x1a00;
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        local_24 = *(int *)(param_1 + 0x58) - ((uVar5 * 2 >> 0x11 & 0x7ff) + 0x3200);
        sub_080AC60C(2,&local_28);
        sub_080032EC(0x2a);
      }
      else {
        iVar4 = (int)cVar2;
        local_28 = *(int *)(param_1 + 0x54) + iVar4 * -0x2600;
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        local_24 = *(int *)(param_1 + 0x58) - ((uVar5 * 2 >> 0x11 & 0x7ff) + 0x2800);
        sub_080AC60C(1,&local_28);
        local_28 = *(int *)(param_1 + 0x54) + iVar4 * -0x1200;
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        local_24 = *(int *)(param_1 + 0x58) - ((uVar5 * 2 >> 0x11 & 0x7ff) + 0x3200);
        sub_080AC60C(1,&local_28);
        local_28 = *(int *)(param_1 + 0x54);
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        local_24 = *(int *)(param_1 + 0x58) - ((uVar5 * 2 >> 0x11 & 0x7ff) + 0x2800);
        sub_080AC60C(1,&local_28);
        local_28 = *(int *)(param_1 + 0x54) + iVar4 * -0x1800;
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        local_24 = *(int *)(param_1 + 0x58) - ((uVar5 * 2 >> 0x11 & 0x7ff) + 0x2000);
        sub_080AC60C(2,&local_28);
        local_28 = *(int *)(param_1 + 0x54) + iVar4 * -0xe00;
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        local_24 = *(int *)(param_1 + 0x58) - ((uVar5 * 2 >> 0x11 & 0x7ff) + 0x3200);
        sub_080AC60C(2,&local_28);
        sub_080032EC(0x2a);
      }
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  }
  return in_lr;
}

