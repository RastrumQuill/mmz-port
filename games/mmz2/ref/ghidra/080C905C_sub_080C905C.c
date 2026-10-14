// sub_080C905C at 0x080C905C (thumb)

undefined4 sub_080C905C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08348f24 + (uint)*(byte *)(param_1 + 0x10) * 8));
    sub_080128D4(param_1);
    sub_08006E08(param_1 + 0x74,&DAT_08348e94);
    goto LAB_080c91ca;
  case 1:
    if (*(char *)(param_1 + 0xf) == '\0') {
      uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
      if (uVar4 < 0x3001) {
        *(undefined *)(param_1 + 0x1f) = 0xff;
        uVar3 = 1;
LAB_080c90f8:
        *(undefined *)(param_1 + 0xf) = uVar3;
      }
    }
    else {
      uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
      if (0x3000 < uVar4) {
        uVar3 = 0;
        goto LAB_080c90f8;
      }
    }
    sub_080128D4(param_1);
    if ((DAT_0202ec38 & 2) != 0) {
      sub_08006E08(param_1 + 0x74,&DAT_08348ef4);
      *(undefined *)(param_1 + 0xe) = 5;
      return in_lr;
    }
    if ((DAT_0202e14c == '\0') && ((DAT_0202ec44 & 1) == 0)) {
      return in_lr;
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x40000000) == 0) {
      *(undefined *)(param_1 + 0xe) = 4;
      return in_lr;
    }
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08348f26 + (uint)*(byte *)(param_1 + 0x10) * 8));
    sub_080032EC(0x9c);
    goto LAB_080c91ca;
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(uint *)(DAT_0202e130 + 0x8c) & 0x40000000) == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08348f28 + (uint)*(byte *)(param_1 + 0x10) * 8));
    DAT_0202ed84 = 2;
LAB_080c91ca:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 3:
    sub_080128D4(param_1);
    if (DAT_0202ed84 == 0) {
      DAT_0202e14c = '\0';
      DAT_0202ed84 = 1;
      piVar5 = (int *)sub_08014738(param_1 + 0x54);
      ppiVar7 = (int **)(param_1 + 0xb8);
      *ppiVar7 = piVar5;
      iVar2 = DAT_0202e130;
      if (piVar5 != (int *)0x0) {
        *(int *)(DAT_0202e130 + 0x54) = *piVar5;
        *(int *)(iVar2 + 0x58) = (*ppiVar7)[1];
        iVar6 = sub_080EF1E8(**ppiVar7 >> 8,0xf0);
        if (iVar6 < 0x78) {
          *(undefined *)(iVar2 + 0x4c) = 1;
          *(byte *)(DAT_0202e130 + 0x4a) = *(byte *)(DAT_0202e130 + 0x4a) | 0x10;
          *(byte *)(DAT_0202e130 + 10) = *(byte *)(DAT_0202e130 + 10) | 0x10;
        }
        else {
          *(undefined *)(iVar2 + 0x4c) = 0;
          *(byte *)(DAT_0202e130 + 0x4a) = *(byte *)(DAT_0202e130 + 0x4a) & 0xef;
          *(byte *)(DAT_0202e130 + 10) = *(byte *)(DAT_0202e130 + 10) & 0xef;
        }
        sub_08038958(DAT_0202e130);
        DAT_0202ed31 = 8;
        DAT_0202ed3a = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    break;
  case 4:
    if ((DAT_0202e14c == '\0') && (bVar1 = (byte)DAT_0202ec44 & 1, (DAT_0202ec44 & 1) == 0)) {
      if (((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x2000U < 0x4001) &&
         ((*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + 0x2000U < 0x4001)) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(byte *)(param_1 + 0xf) = bVar1;
        *(byte *)(param_1 + 0xe) = bVar1;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    break;
  case 5:
    bVar1 = (byte)DAT_0202ec38;
    if ((DAT_0202ec38 & 2) == 0) {
      sub_08006E08(param_1 + 0x74,&DAT_08348e94);
      *(byte *)(param_1 + 0xe) = bVar1 & 2;
    }
  }
  return in_lr;
}

