// sub_08122338 at 0x08122338 (thumb)

undefined4
sub_08122338(int param_1,uint param_2,undefined4 param_3,byte param_4,char param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = param_6 * 0x1000000 + 0x4000000U >> 0x18;
  sub_0810D214(&DAT_0886a17c + *(ushort *)(&DAT_08869afe + ((uint)(param_1 << 0x18) >> 0x17)),5,
               uVar4);
  sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[(param_2 & 0xff) + 0x28],8,uVar4);
  iVar2 = sub_08128A24(param_3,0x20f580);
  sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[iVar2 + 0x1e],0xd,uVar4);
  uVar3 = sub_08128A24(param_3,0x34bc0);
  iVar2 = sub_08128A9C(uVar3,10);
  sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[iVar2 + 0x1e],0xe,uVar4);
  sub_0810D214(&DAT_0886a197,0xf,uVar4);
  uVar3 = sub_08128A24(param_3,36000);
  iVar2 = sub_08128A9C(uVar3,6);
  sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[iVar2 + 0x1e],0x10,uVar4);
  uVar3 = sub_08128A24(param_3,0xe10);
  iVar2 = sub_08128A9C(uVar3,10);
  sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[iVar2 + 0x1e],0x11,uVar4);
  sub_0810D214(&DAT_0886a199,0x12,uVar4);
  uVar3 = sub_08128A24(param_3,600);
  iVar2 = sub_08128A9C(uVar3,6);
  sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[iVar2 + 0x1e],0x13,uVar4);
  uVar3 = sub_08128A24(param_3,0x3c);
  iVar2 = sub_08128A9C(uVar3,10);
  sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[iVar2 + 0x1e],0x14,uVar4);
  if (param_4 != 0) {
    if (9 < param_4) {
      iVar2 = sub_08128A24(param_4,10);
      sub_0810D214(&DAT_0886a17c + *(ushort *)(&DAT_08869afc + ((uint)(iVar2 << 0x18) >> 0x17)),0x16
                   ,uVar4);
    }
    iVar2 = sub_08128A9C(param_4,10);
    sub_0810D214(&DAT_0886a17c + *(ushort *)(&DAT_08869afc + ((uint)(iVar2 << 0x18) >> 0x17)),0x17,
                 uVar4);
  }
  if (param_5 == '\x01') {
    uVar1 = 0x11;
  }
  else {
    if (param_5 != '\x02') {
      if (param_5 != '\x03') {
        return in_lr;
      }
      sub_0810D214(&DAT_0886a19f,0x19,uVar4);
      return in_lr;
    }
    uVar1 = 0x14;
  }
  sub_0810D214(&DAT_0886a17c + uVar1,0x19,uVar4);
  return in_lr;
}

