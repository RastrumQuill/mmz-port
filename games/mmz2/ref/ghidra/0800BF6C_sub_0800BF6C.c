// sub_0800BF6C at 0x0800BF6C (thumb)

undefined4 sub_0800BF6C(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = 0;
    do {
      if (((int)(uint)(byte)(&DAT_0202ebb4)[(ushort)(&DAT_08316fd0)[(short)uVar2] >> 3] >>
           ((ushort)(&DAT_08316fd0)[(short)uVar2] & 7) & 1U) != 0) {
        uVar3 = uVar3 * 0x10000 + 0x10000 >> 0x10;
      }
      uVar1 = (int)(short)uVar2 + 1;
      uVar2 = uVar1 & 0xffff;
    } while ((int)(uVar1 * 0x10000) >> 0x10 < 4);
    sub_0800860C(0x251,0x19,*(undefined4 *)(&UNK_08316fbc + (short)uVar3 * 4));
    sub_0800860C(599,0x19,*(undefined4 *)(&UNK_08316fbc + (short)uVar3 * 4));
    if ((short)uVar3 == 4) {
      sub_0800860C(0x24a,0x1d,&DAT_08316f40);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

