// sub_080DB990 at 0x080DB990 (thumb)

undefined4 sub_080DB990(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0xdf01);
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        sub_08004230(0xbe);
        iVar2 = sub_08017B8C(param_1);
        sub_080040A8(0xbd,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_080dbaae;
      sub_080177F4(param_1);
      if (((int)(uint)DAT_02030154 >> *(sbyte *)(param_1 + 0x10) & 1U) == 0) {
        DAT_02030154 = DAT_02030154 ^ (byte)(1 << *(sbyte *)(param_1 + 0x10));
        *(undefined *)(param_1 + 0xf) = 0;
      }
      goto LAB_080dbaae;
    }
    if (bVar1 != 0) goto LAB_080dbaae;
    sub_08017700(param_1,0xdf00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836dc64,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_08004230(0xbd);
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8(0xbe,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_0800471C(0x3c);
    sub_080253D8(0,param_1,&DAT_0836dc84);
    DAT_02030154 = (byte)(1 << *(sbyte *)(param_1 + 0x10)) | DAT_02030154;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
LAB_080dbaae:
  sub_080041E4(0xbd);
  sub_080041E4(0xbe);
  return in_lr;
}

