// sub_0803A7E8 at 0x0803A7E8 (thumb)

undefined4 sub_0803A7E8(undefined4 param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  do {
    uVar3 = (uint)(ushort)(&DAT_02000040)[uVar4];
    if (uVar3 != 0xffff) {
      if ((&DAT_02000048)[uVar4] == '\0') {
        uVar2 = (&DAT_02000040)[uVar4];
        bVar1 = (&DAT_088501c8)[uVar4];
        sub_081284E4(&UNK_088501cc + (uint)uVar2 * 0x20,&DAT_03002cc0 + (uint)bVar1 * 0x20,0);
        sub_081284E8(&UNK_088501cc + (uint)uVar2 * 0x20,&DAT_03002cc0 + (uint)bVar1 * 0x20,0x4000005
                    );
      }
      else {
        sub_081284E4(&UNK_088501cc + uVar3 * 0x20,
                     &DAT_03002cc0 + (uint)(byte)(&DAT_088501c8)[uVar4] * 0x20,8);
      }
      (&DAT_02000040)[uVar4] = 0xffff;
    }
    uVar4 = uVar4 + 1 & 0xffff;
  } while (uVar4 < 2);
  sub_0801C924(DAT_0202ed88,param_1);
  return in_lr;
}

