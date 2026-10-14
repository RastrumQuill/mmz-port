// sub_0811C4EC at 0x0811C4EC (thumb)

undefined4 sub_0811C4EC(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_0811CD3C();
  uVar4 = 0;
  do {
    if (6 < uVar4) {
LAB_0811c556:
      sub_0811CED0(param_1);
      if (*(char *)(param_1 + 3) == '\x04') {
        uVar4 = 0;
        do {
          pbVar3 = (byte *)(param_1 + 0xddd + uVar4);
          if (*pbVar3 == 0xff) {
            sub_0810D214(&DAT_0886bab7,0x11,uVar4 * 2 + 6);
          }
          else {
            sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*pbVar3 + 0x118],0x11,uVar4 * 2 + 6
                        );
          }
          uVar4 = uVar4 + 1 & 0xff;
        } while (uVar4 < 4);
      }
      else {
        uVar4 = 0;
        do {
          pbVar3 = (byte *)(param_1 + 0xdd9 + uVar4);
          if (*pbVar3 == 0xff) {
            sub_0810D214(&DAT_0886bab7,0x11,uVar4 * 2 + 6);
          }
          else {
            sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*pbVar3 + 0x118],0x11,uVar4 * 2 + 6
                        );
          }
          uVar4 = uVar4 + 1 & 0xff;
        } while (uVar4 < 4);
      }
      if (*(char *)(param_1 + 3) == '\x01') {
        puVar2 = &DAT_08869e8a;
      }
      else {
        iVar5 = 0;
        if (*(char *)(param_1 + 3) == '\x04') {
          *(undefined *)(param_1 + 0xde5) = 1;
          if (*(char *)(param_1 + 0xde1) == -1) {
            sub_0810D214(&DAT_0886b338,0x11,1);
            uVar1 = 0x1967;
          }
          else {
            sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*(byte *)(param_1 + 0xde1) + 400],
                         0x11,1);
            uVar1 = 0x195c;
          }
          sub_0810D214(&DAT_0886a17c + uVar1,0x11,0xf);
        }
        else if (*(char *)(param_1 + 0xdda) == -1) {
          sub_0810D214(&DAT_0886babc,0x11,0xf);
          iVar5 = 1;
        }
        else {
          *(undefined *)(param_1 + 0xde5) = 1;
          uVar4 = sub_0811D0D4(param_1 + 0xdd9);
          if (((uVar4 & 0xff) != 0xff) &&
             (((int)(uint)*(byte *)(DAT_0202edac + ((uVar4 << 0x18) >> 0x1a)) >> (uVar4 & 3) + 4 &
              1U) != 0)) {
            sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[(uVar4 & 0xff) + 400],0x11,1);
            sub_0810D214(&DAT_0886bad3,0x11,0xf);
            iVar5 = 2;
          }
          if (iVar5 == 0) {
            sub_0810D214(&DAT_0886baab,0x11,1);
            sub_0810D214(&DAT_0886bac7,0x11,0xf);
          }
        }
        if (*(char *)(param_1 + 3) == '\x04') {
          puVar2 = &DAT_08869e9a;
        }
        else {
          if (*(char *)(param_1 + 3) == '\x02') {
            iVar5 = 0x3ce;
          }
          else {
            if (3 < *(byte *)(param_1 + 0xdd0)) {
              sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[iVar5 + 0x1ea],1,0x12);
              return in_lr;
            }
            iVar5 = 0x3d0;
          }
          puVar2 = (ushort *)((int)&DAT_08869ac0 + iVar5);
        }
      }
      sub_0810D214(&DAT_0886a17c + *puVar2,1,0x12);
      return in_lr;
    }
    pbVar3 = (byte *)(param_1 + 0xdd2 + uVar4);
    if (*pbVar3 == 0xff) {
      if (uVar4 == 0) {
        sub_0810D214(&DAT_0886bab7,2,2);
      }
      goto LAB_0811c556;
    }
    sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*pbVar3 + 0x118],2,uVar4 * 2 + 2);
    uVar4 = uVar4 + 1 & 0xff;
  } while( true );
}

