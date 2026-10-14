// sub_0811CD3C at 0x0811CD3C (thumb)

undefined4 sub_0811CD3C(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  do {
    uVar2 = 0;
    iVar5 = param_1 + 0xdd2;
    do {
      *(undefined *)(iVar5 + uVar2) = 0xff;
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 7);
    *(undefined *)(param_1 + 0xde3) = 0;
    *(undefined *)(param_1 + 0xde4) = 0;
    *(undefined *)(param_1 + 0xdcf) = 0;
    iVar1 = DAT_0202eda8;
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
    do {
      if (((int)(uint)*(byte *)((uVar2 >> 1) + iVar1) >> ((uVar2 & 1) << 2) & 0xfU) != 0) {
        if (uVar4 == *(byte *)(param_1 + 0xde2) + uVar3) {
          *(char *)(iVar5 + uVar3) = (char)uVar2;
          *(char *)(param_1 + 0xdcf) = *(char *)(param_1 + 0xdcf) + '\x01';
          if (uVar3 < 6) {
            uVar3 = uVar3 + 1 & 0xff;
          }
        }
        else if (uVar3 == 0) {
          *(undefined *)(param_1 + 0xde3) = 1;
        }
        else if (uVar3 == 6) {
          *(undefined *)(param_1 + 0xde4) = 1;
          break;
        }
        uVar4 = uVar4 + 1 & 0xff;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0x33);
    if ((*(char *)(param_1 + 0xdd8) != -1) || (*(char *)(param_1 + 0xde3) == '\0')) {
      if (*(char *)(param_1 + 0xdce) != '\0') {
        do {
          if (*(char *)(iVar5 + (uint)*(byte *)(param_1 + 0xdce)) != -1) {
            return in_lr;
          }
          uVar2 = *(byte *)(param_1 + 0xdce) - 1;
          *(char *)(param_1 + 0xdce) = (char)uVar2;
        } while ((uVar2 & 0xff) != 0);
      }
      return in_lr;
    }
    *(char *)(param_1 + 0xde2) = *(char *)(param_1 + 0xde2) + -1;
  } while( true );
}

