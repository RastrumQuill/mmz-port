// sub_080F3374 at 0x080F3374 (thumb)

undefined4 sub_080F3374(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x64ac);
  sub_080F3588(param_1);
  sub_080F363C(param_1);
  if ((*(char *)(param_1 + 0xe1e) != '\x02') && (*(char *)(iVar5 + 0xd9) == '\x02')) {
    *(undefined *)(iVar5 + 0xda) = 0;
  }
  if (*(char *)(param_1 + 0xe16) != *(char *)(iVar5 + 0xc2)) {
    sub_08025324(*(undefined *)(iVar5 + 0xc2));
  }
  bVar2 = 0;
  do {
    if (bVar2 == 0) {
      if (*(char *)(param_1 + 0xe14) != *(char *)(iVar5 + 0xb4)) {
        cVar1 = *(char *)(iVar5 + 0xb4);
LAB_080f3416:
        sub_080E1274(iVar5,cVar1,bVar2);
      }
    }
    else if (*(char *)(param_1 + 0xe15) != *(char *)(iVar5 + 0xb5)) {
      cVar1 = *(char *)(iVar5 + 0xb5);
      goto LAB_080f3416;
    }
    bVar2 = bVar2 + 1;
    if (1 < bVar2) {
      uVar4 = (uint)*(byte *)(param_1 + 0xe1c);
      if (uVar4 != 0xff) {
        sub_080FE2CC(iVar5,(&DAT_0836e30e)[uVar4 * 4],
                     (uint)(*(int *)(DAT_0203063c + uVar4) << 0x1d) >> 0x1f,0);
        DAT_0202f5d0 = 1;
      }
      uVar3 = sub_08025A04(iVar5);
      if ((short)(uVar3 & 0xff) < (short)*(ushort *)(iVar5 + 0xa4)) {
        uVar3 = sub_08025A04(iVar5);
        *(ushort *)(iVar5 + 0xa4) = uVar3 & 0xff;
      }
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838b9a8 + (uint)*(byte *)(param_1 + 0xe18) * 4));
      sub_08036FA8(0x80f38d1);
      sub_080E105C(0x80f38f1);
      sub_080EDB10(param_1,0x600);
      return in_lr;
    }
  } while( true );
}

