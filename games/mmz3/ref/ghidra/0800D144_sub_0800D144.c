// sub_0800D144 at 0x0800D144 (thumb)

undefined4 sub_0800D144(void)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((DAT_02002c54 >> 8 == 3) && ((DAT_02002c54 & 0xff) == 2)) {
    sub_08003AB0(&UNK_087d66c0 + (uint)(DAT_0202f4a9 >> 3) * 0x14,0x4000);
    sub_08003E14(&UNK_087d66cc + (uint)(DAT_0202f4a9 >> 3) * 0x14,0);
    cVar1 = FUN_080fe2f8((int)(char)DAT_0202f4aa,3);
    sub_08003AB0(&UNK_087d6760 + cVar1 * 0x14,0x4000);
    cVar1 = FUN_080fe2f8((int)(char)DAT_0202f4aa,3);
    sub_08003E14(&UNK_087d676c + cVar1 * 0x14,0);
  }
  return in_lr;
}

