// sub_0811FB04 at 0x0811FB04 (thumb)

undefined4 sub_0811FB04(int param_1)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_0812045C();
  uVar3 = 0;
  do {
    if (6 < uVar3) {
LAB_0811fb6e:
      if (*(byte *)(param_1 + 3) < 2) {
        uVar3 = 0;
        cVar1 = '\0';
        do {
          if (((int)(uint)(byte)(&DAT_02000a70)[(int)(uVar3 + 0x4c) >> 3] >> (uVar3 + 0x4c & 7) & 1U
              ) != 0) {
            cVar1 = cVar1 + '\x01';
          }
          uVar3 = uVar3 + 1 & 0xff;
        } while (uVar3 < 8);
        sub_08117D68(cVar1,0x15,1);
        sub_0810D214(&DAT_0886a195,0x16,1);
        sub_08117D68(8,0x17,1);
        sub_0810D214(&DAT_0886c497,0x11,5);
      }
      else {
        uVar3 = (uint)*(byte *)(param_1 + 0xdd2 + (uint)*(byte *)(param_1 + 0xdce));
        if (uVar3 == 0xff) {
          sub_0810D214(&DAT_0886bab7,0x11,1);
        }
        else {
          sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[uVar3 + 600],0x11,1);
          sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[uVar3 + 700],0x11,5);
        }
      }
      return in_lr;
    }
    pbVar2 = (byte *)(param_1 + 0xdd2 + uVar3);
    if (*pbVar2 == 0xff) {
      if (uVar3 == 0) {
        sub_0810D214(&DAT_0886bab7,2,2);
      }
      goto LAB_0811fb6e;
    }
    sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*pbVar2 + 600],2,uVar3 * 2 + 2);
    uVar3 = uVar3 + 1 & 0xff;
  } while( true );
}

