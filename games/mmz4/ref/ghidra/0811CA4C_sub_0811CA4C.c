// sub_0811CA4C at 0x0811CA4C (thumb)

undefined4 sub_0811CA4C(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  sub_0811CE24();
  for (uVar7 = 0; uVar7 < 7; uVar7 = uVar7 + 1 & 0xff) {
    pbVar4 = (byte *)(param_1 + 0xdd2 + uVar7);
    if (*pbVar4 == 0xff) {
      if (uVar7 == 0) {
        sub_0810D214(&DAT_0886bab7,2,2);
      }
      break;
    }
    sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*pbVar4 + 400],2,uVar7 * 2 + 2);
  }
  cVar3 = *(char *)(param_1 + 3);
  if (cVar3 == '\x01') {
    uVar7 = 0;
    do {
      sub_0810D214(&DAT_0886bab7,0x11,uVar7 * 2 + 6);
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < 4);
    sub_0810D214(&DAT_0886bb06,1,0x12);
    return in_lr;
  }
  if (cVar3 == '\x04') {
    iVar5 = 0x3da;
  }
  else {
    if (cVar3 != '\x02') {
      sub_0810D214(&DAT_0886bb6a,1,0x12);
      goto LAB_0811cb56;
    }
    iVar5 = 0x3d2;
  }
  sub_0810D214(&DAT_0886a17c + *(ushort *)((int)&DAT_08869ac0 + iVar5),1,0x12);
LAB_0811cb56:
  iVar5 = param_1 + 0xdd2;
  pbVar4 = (byte *)(iVar5 + (uint)*(byte *)(param_1 + 0xdce));
  if (*pbVar4 == 0xff) {
    sub_0810D214(&DAT_0886bab7,0x11,6);
  }
  else {
    bVar2 = *pbVar4;
    uVar7 = 0;
    do {
      if ((&DAT_08869308)[uVar7 + (uint)bVar2 * 4] == 0xff) {
        sub_0810D214(&DAT_0886bab7,0x11,uVar7 * 2 + 6);
      }
      else {
        bVar1 = (&DAT_08869308)[uVar7 + (uint)bVar2 * 4];
        uVar6 = (uint)bVar1;
        if (((int)(uint)*(byte *)(DAT_0202eda8 + (uint)(bVar1 >> 1)) >> ((uVar6 & 1) << 2) & 0xfU)
            == 0) {
          sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[uVar6 + 0x154],0x11,uVar7 * 2 + 6);
        }
        else {
          sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[uVar6 + 0x118],0x11,uVar7 * 2 + 6);
          sub_0811CF88(param_1,uVar6);
        }
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < 4);
    sub_0811D07C(param_1);
  }
  uVar7 = (uint)*(byte *)(iVar5 + (uint)*(byte *)(param_1 + 0xdce));
  if (uVar7 != 0xff) {
    sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[uVar7 + 400],0x11,1);
  }
  if (*(char *)(param_1 + 3) == '\x04') {
    sub_0810D214(&DAT_0886bad8,0x11,0xf);
    *(undefined *)(param_1 + 0xde5) = 1;
  }
  else {
    bVar2 = *(byte *)((uint)*(byte *)(param_1 + 0xdce) + iVar5);
    uVar7 = (uint)bVar2;
    if (uVar7 != 0xff) {
      if (((int)(uint)*(byte *)(DAT_0202edac + (uint)(bVar2 >> 2)) >> (uVar7 & 3) + 4 & 1U) == 0) {
        cVar3 = sub_0811D2B0(uVar7);
        if (cVar3 == '\0') {
          sub_0810D214(&DAT_0886babc,0x11,0xf);
        }
        else {
          sub_0810D214(&DAT_0886bac7,0x11,0xf);
          *(undefined *)(param_1 + 0xde5) = 1;
        }
      }
      else {
        sub_0810D214(&DAT_0886bad3,0x11,0xf);
      }
    }
  }
  return in_lr;
}

