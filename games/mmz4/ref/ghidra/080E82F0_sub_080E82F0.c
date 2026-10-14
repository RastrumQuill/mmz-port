// sub_080E82F0 at 0x080E82F0 (thumb)

undefined4 sub_080E82F0(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  if (param_2 != 0xff) {
    if (param_2 == 8) {
      param_3 = param_3 + 1 & 1;
    }
    bVar1 = (&DAT_08865d04)[param_3 + param_2 * 2];
    if (param_3 == 0) {
      uVar4 = 0;
      do {
        uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar3 & 0x7fffffff;
        sub_080E8254(param_1,((uint)bVar1 - (uint)(byte)(&DAT_08865d16)[uVar4]) -
                             ((uVar2 * 2 >> 0x11 & 0xf) - 8) & 0xff,
                     (uVar3 * 2 >> 0x11 & 0xff) +
                     (uint)*(ushort *)(&DAT_08865cd4 + uVar4 * 2 + (param_4 & 0xff) * 0x18) & 0xffff
                    );
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 8);
    }
    else {
      uVar4 = 0;
      do {
        uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar3 & 0x7fffffff;
        sub_080E8254(param_1,((uint)bVar1 + (uint)(byte)(&DAT_08865d16)[uVar4]) -
                             ((uVar2 * 2 >> 0x11 & 0xf) - 8) & 0xff,
                     (uVar3 * 0x80 >> 0x17) +
                     (uint)*(ushort *)(&DAT_08865cd4 + uVar4 * 2 + (param_4 & 0xff) * 0x18) & 0xffff
                    );
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 8);
    }
  }
  return in_lr;
}

