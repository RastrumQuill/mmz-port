// sub_0803CB60 at 0x0803CB60 (thumb)

undefined4 sub_0803CB60(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  short asStack_10 [2];
  
  sub_080C8D70(asStack_10,&DAT_080c9294,4);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    if (*(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c)) {
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      uVar4 = 0x100;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      uVar4 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    iVar5 = *(int *)(DAT_0202286c + 0x50) + -0x3000;
    if (*(int *)(param_1 + 0x50) < iVar5) {
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 0x4001) {
        uVar4 = 0x80;
      }
      else {
        uVar4 = 0x100;
      }
    }
    else {
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 0x4001) {
        uVar4 = 0xffffff80;
      }
      else {
        uVar4 = 0xffffff00;
      }
    }
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    iVar6 = *(int *)(param_1 + 0x54) +
            (int)*(short *)((int)asStack_10 + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2U))
    ;
    *(int *)(param_1 + 0x54) = iVar6;
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = -iVar6;
    }
    if (iVar5 < 0x401) goto LAB_0803ccfa;
    uVar3 = sub_080C8AD0(iVar6,0x30);
    *(undefined2 *)(param_1 + 0xce) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x30;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_0803ccfa;
      iVar5 = *(int *)(param_1 + 0x54) +
              (int)*(short *)((int)asStack_10 +
                             ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2U));
      *(int *)(param_1 + 0x54) = iVar5;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 0x181) goto LAB_0803ccfa;
      uVar4 = 2;
    }
    else {
      if (bVar1 != 2) {
        if (bVar1 == 3) {
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - (int)*(short *)(param_1 + 0xce);
          cVar2 = *(char *)(param_1 + 0x12) + -1;
          *(char *)(param_1 + 0x12) = cVar2;
          if (cVar2 == -1) {
            *(undefined4 *)(param_1 + 0x54) = 0;
            *(undefined *)(param_1 + 0xd) = 2;
            *(undefined *)(param_1 + 0xe) = 1;
          }
        }
        goto LAB_0803ccfa;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - (int)*(short *)(param_1 + 0xce);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\x0f') goto LAB_0803ccfa;
      uVar4 = 1;
    }
    sub_08029778(param_1,uVar4);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0803ccfa:
  if ((*(char *)(param_1 + 0xf) != '\0') &&
     (*(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c) !=
      (bool)(*(byte *)(param_1 + 10) >> 4 & 1))) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 2;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  sub_080297C0(param_1);
  return in_lr;
}

