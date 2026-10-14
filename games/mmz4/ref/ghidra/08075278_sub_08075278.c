// sub_08075278 at 0x08075278 (thumb)

undefined4 sub_08075278(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x50ff) {
    sub_0801CF00(param_1);
  }
  sub_08005784(param_1 + 0x74,&DAT_088598e0);
  sub_0801CFF0(param_1);
  bVar1 = (byte)DAT_0202e918;
  if ((DAT_0202e918 & 8) != 0) {
    return in_lr;
  }
  iVar2 = *(int *)(DAT_0202dbf0 + 0x54);
  iVar4 = *(int *)(param_1 + 0x54);
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) != iVar4 < iVar2) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(byte *)(param_1 + 0xe) = bVar1 & 8;
    return in_lr;
  }
  if (iVar4 - iVar2 < 0) {
    if (0x4eff < iVar2 - iVar4) goto LAB_08075318;
LAB_08075310:
    iVar2 = 0;
  }
  else {
    if (iVar4 - iVar2 < 0x4f00) goto LAB_08075310;
LAB_08075318:
    iVar2 = iVar4 - *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar2 < 0) {
      iVar2 = *(int *)(DAT_0202dbf0 + 0x54) - iVar4;
    }
    if (iVar2 < 0x8f00) {
      iVar2 = 1;
    }
    else {
      iVar2 = 2;
    }
  }
  iVar5 = 2;
  if ((0xf < *(short *)(param_1 + 0xa4)) && (iVar5 = 0, *(short *)(param_1 + 0xa4) < 0x20)) {
    iVar5 = 1;
  }
  if (*(int *)(DAT_0202dbf0 + 0x54) < iVar4) {
    if (*(int *)(param_1 + 0xc4) + 0x3000 <= iVar4) {
LAB_080753a0:
      do {
        uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar3 & 0x7fffffff;
        uVar3 = uVar3 * 2 >> 0x11 & 0x1f;
        if (iVar2 == 0) {
          if (uVar3 < 10) goto LAB_08075408;
          if (uVar3 < 0x15) goto LAB_08075410;
LAB_08075414:
          *(undefined *)(param_1 + 0xd) = 0xd;
        }
        else {
          if (iVar2 == 1) {
            if (iVar5 == 0) {
              if (0xd < uVar3) {
                if (0x16 < uVar3) goto LAB_08075414;
LAB_08075410:
                *(undefined *)(param_1 + 0xd) = 0xb;
                goto LAB_08075416;
              }
            }
            else if (0xb < uVar3) {
              if (uVar3 < 0x16) goto LAB_08075410;
              goto LAB_08075414;
            }
          }
          else if (8 < uVar3) {
            if (uVar3 < 0x13) goto LAB_08075410;
            goto LAB_08075414;
          }
LAB_08075408:
          *(undefined *)(param_1 + 0xd) = 4;
        }
LAB_08075416:
        if (*(char *)(param_1 + 0xdc) != *(char *)(param_1 + 0xd)) {
          *(char *)(param_1 + 0xdc) = *(char *)(param_1 + 0xd);
          *(undefined *)(param_1 + 0xe) = 0;
          return in_lr;
        }
      } while( true );
    }
  }
  else if (iVar4 <= *(int *)(param_1 + 200) + -0x3000) goto LAB_080753a0;
  *(undefined *)(param_1 + 0xd) = 0xd;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xdc) = 0xd;
  return in_lr;
}

