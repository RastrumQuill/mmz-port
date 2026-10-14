// sub_080F1CA4 at 0x080F1CA4 (thumb)

undefined4 sub_080F1CA4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort uVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    break;
  case 1:
    goto switchD_080f1cb8_caseD_1;
  case 2:
    sub_0801CFF0(param_1);
    if (DAT_0202f612 != '\0') {
      return in_lr;
    }
    DAT_0202dbf8 = DAT_0202f612;
    sub_0801CF00(param_1,0xc200);
    cVar2 = '\x01';
    goto LAB_080f2032;
  default:
    goto switchD_080f1cb8_caseD_3;
  case 0x10:
    sub_0801CF00(param_1,0xc206);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x11:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_08112080(&DAT_0202f610,0x60400);
    cVar2 = '\x02';
    goto LAB_080f2032;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  sub_0801CF00(param_1,0xc200);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  uVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08866958,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f1cb8_caseD_1:
  sub_0801CFF0(param_1);
  puVar3 = (undefined *)(param_1 + 0x70);
  uVar5 = 0xc200;
  if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar3) == -0x3e00) || ((DAT_0202dad5 & 0x7f) != 0))
  {
    uVar5 = 0xc206;
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar3) != -0x3dfa) &&
       ((DAT_0202dad5 & 0x7f) == 1)) goto LAB_080f1dc2;
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar3) != -0x3dff) &&
       ((DAT_0202dad5 & 0x7f) == 2)) {
      sub_0801CF00(param_1,0xc201);
    }
  }
  else {
LAB_080f1dc2:
    sub_0801CF00(param_1,uVar5);
  }
  uVar4 = DAT_0202dad5 >> 7 ^ 1;
  if (uVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  uVar6 = DAT_0202e922 & 1;
  if ((DAT_0202e922 & 1) == 0) {
    if ((DAT_0202e8b6 & 0x60) == 0x20) {
      puVar3 = &DAT_0884dca4;
    }
    else {
      if (((DAT_0202e8b7 & 1) == 0) || (uVar6 = DAT_0202e8b7 & 2, (DAT_0202e8b7 & 2) != 0)) {
        if ((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) {
          return in_lr;
        }
        if (DAT_0202dbf8 == '\0') {
          return in_lr;
        }
        if (DAT_03003908 != param_1 + 0x74) {
          return in_lr;
        }
        sub_08006984(0x58);
        sub_08006984(0x5e);
        if ((DAT_0202e8b6 & 0x10) == 0) {
          if (((DAT_0202e8b6 & 8) == 0) && ((DAT_0202e8b6 & 2) == 0)) {
            if ((DAT_0202e8b6 & 1) == 0) {
              if ((DAT_0202e8b5 & 0x80) == 0) {
                if ((DAT_0202e8b5 & 0x40) != 0) {
                  sub_080276A4(&DAT_0202e920,&DAT_0884d89c,param_1);
                  *(undefined *)(param_1 + 0xd) = 0x10;
                  DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
                  DAT_0202e8b5 = DAT_0202e8b5 & 0xe0 | 0x80;
                  return in_lr;
                }
                sub_08112080(&DAT_0202f610,0x50400);
              }
              else {
                sub_08112080(&DAT_0202f610,0x70400);
              }
            }
            else {
              sub_08112080(&DAT_0202f610,0x80400);
            }
          }
          else {
            sub_08112080(&DAT_0202f610,0x90400);
          }
        }
        else {
          sub_08112080(&DAT_0202f610,0x20400);
        }
        sub_0801CF00(param_1,0xc206);
        cVar2 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080f2032:
        *(char *)(param_1 + 0xd) = cVar2;
        return in_lr;
      }
      puVar3 = &DAT_0884df14;
    }
    sub_080276A4(&DAT_0202e920,puVar3,param_1);
    DAT_0202e914 = uVar6;
  }
switchD_080f1cb8_caseD_3:
  return in_lr;
}

