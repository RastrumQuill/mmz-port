// sub_080415C8 at 0x080415C8 (thumb)

undefined4 sub_080415C8(int param_1)

{
  undefined uVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa200);
    if (*(char *)(param_1 + 0xbf) == '\0') {
      uVar1 = 8;
    }
    else {
      uVar1 = 7;
    }
    *(undefined *)(param_1 + 0xc0) = uVar1;
    *(undefined *)(param_1 + 0xc2) = uVar1;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pbVar3 = (byte *)(param_1 + 0xbf);
  *(undefined4 *)(param_1 + 0x54) =
       *(undefined4 *)(*(int *)(param_1 + 0xb4 + (*pbVar3 + 4) * 4) + 0x54);
  *(undefined4 *)(param_1 + 0x58) =
       *(undefined4 *)(*(int *)(param_1 + 0xb4 + (*pbVar3 + 4) * 4) + 0x58);
  if (*(char *)(param_1 + 0xf) == '\0') {
    pcVar2 = (char *)(param_1 + 0xc0);
    if (*pcVar2 == '\0') {
      if (*pbVar3 == 0) {
        uVar1 = 0xd;
        *pcVar2 = '\r';
      }
      else {
        uVar1 = 9;
        *pcVar2 = '\t';
      }
      *(undefined *)(param_1 + 0xc2) = uVar1;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xc0) == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

