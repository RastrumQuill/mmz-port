// sub_0810000C at 0x0810000C (thumb)

undefined4 sub_0810000C(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xb4) = 0;
  pbVar4 = (byte *)(param_1 + 0xb5);
  if (0x5f < *pbVar4) {
    *(undefined *)(param_1 + 0xb4) = 1;
    *pbVar4 = *pbVar4 + 0xa0;
  }
  pbVar4 = (byte *)(param_1 + 0xb5);
  *(byte *)(param_1 + 0x13) = *pbVar4;
  if (0x1f < *pbVar4) {
    *(undefined *)(param_1 + 0xd) = 1;
    bVar1 = *pbVar4;
    bVar2 = bVar1 - 0x20;
    *pbVar4 = bVar2;
    if (bVar2 < 2) {
      *(undefined *)(param_1 + 0xb6) = 0;
      *(char *)(param_1 + 0xb7) = *pbVar4 + 1;
      *(byte *)(param_1 + 0x12) = '4' - *pbVar4;
      sub_0801CFC8(param_1,*(byte *)(param_1 + 0xb4) + 0xbe04,*(undefined *)(param_1 + 0xb6),
                   *(char *)(param_1 + 0xb7));
      *(undefined *)(param_1 + 0xe) = 1;
    }
    else if (bVar2 < 0x36) {
      *pbVar4 = bVar1 - 0x22;
      *(char *)(param_1 + 0xb6) = (*pbVar4 >> 1 & 3) + 1;
      *(char *)(param_1 + 0xb7) = (*pbVar4 & 1) + 1;
      sub_0801CFC8(param_1,*(byte *)(param_1 + 0xb4) + 0xbe04,*(char *)(param_1 + 0xb6),
                   *(char *)(param_1 + 0xb7));
      *(byte *)(param_1 + 0x12) = '4' - *pbVar4;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    else {
      if (bVar2 < 0x3b) {
        *pbVar4 = bVar1 + 0xaa;
        *(byte *)(param_1 + 0xb6) = *pbVar4 >> 1;
        *(char *)(param_1 + 0xb7) = (*pbVar4 & 1) + 1;
        *(undefined *)(param_1 + 0x12) = 0xff;
        sub_0801CFC8(param_1,*(byte *)(param_1 + 0xb4) + 0xbe06,*(byte *)(param_1 + 0xb6),
                     *(char *)(param_1 + 0xb7));
        uVar3 = 2;
      }
      else {
        *pbVar4 = bVar1 + 0xa5;
        pbVar5 = (byte *)(param_1 + 0xb4);
        *pbVar5 = *pbVar5 + 1 & 1;
        bVar1 = *pbVar4;
        if ((bVar1 == 0) || (bVar1 == 4)) {
          *(undefined *)(param_1 + 0xb7) = 1;
          *(byte *)(param_1 + 0xb6) = *pbVar4 >> 1;
        }
        else {
          *(byte *)(param_1 + 0xb7) = bVar1;
          *(undefined *)(param_1 + 0xb6) = 1;
        }
        sub_0801CFC8(param_1,*pbVar5 + 0xbe02,*(undefined *)(param_1 + 0xb6),
                     *(undefined *)(param_1 + 0xb7));
        *(undefined *)(param_1 + 0x12) = 0xff;
        uVar3 = 3;
      }
      *(undefined *)(param_1 + 0xe) = uVar3;
    }
    goto LAB_081001ec;
  }
  *(byte *)(param_1 + 0x12) = '!' - *pbVar4;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  bVar1 = *pbVar4;
  if (bVar1 < 0x10) {
LAB_0810006a:
    *(byte *)(param_1 + 0xb6) = *pbVar4 >> 1;
    bVar1 = *pbVar4 & 1;
  }
  else {
    if (0x19 < bVar1) {
      *pbVar4 = bVar1 - 0x1a;
      goto LAB_0810006a;
    }
    *pbVar4 = bVar1 - 0x10;
    *(undefined *)(param_1 + 0xb6) = 8;
    bVar1 = *pbVar4;
  }
  *(char *)(param_1 + 0xb7) = bVar1 + 1;
  sub_0801CFC8(param_1,*(byte *)(param_1 + 0xb4) | 0xbe00,*(undefined *)(param_1 + 0xb6),
               *(char *)(param_1 + 0xb7));
LAB_081001ec:
  *pbVar4 = 0;
  return in_lr;
}

