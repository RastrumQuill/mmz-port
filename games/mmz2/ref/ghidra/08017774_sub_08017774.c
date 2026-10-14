// sub_08017774 at 0x08017774 (thumb)

/* WARNING: Restarted to delay deadcode elimination for space: ram */

longlong sub_08017774(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint in_lr;
  
  iVar6 = *(int *)(param_1 + 0x20);
  pcVar4 = (char *)(param_1 + 0x17c);
  if (*pcVar4 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    *(undefined2 *)(param_1 + 0x16e) = 0x701;
    DAT_0202ebb4 = DAT_0202ebb4 & 0xfb;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832a254);
      sub_08014D0C(1);
      *(undefined2 *)(param_1 + 10) = 0;
      *pcVar4 = '\x01';
    }
    else {
      if (DAT_0202ec32 == 1) {
        sub_0801B454(&DAT_0202ec40,&DAT_0832a2e4);
      }
      else {
        *(byte *)(param_1 + 0x17d) = (char)DAT_0202ec32 - 2;
        sub_0801B454(&DAT_0202ec40,
                     *(undefined4 *)(&DAT_0832ad6c + (uint)*(byte *)(param_1 + 0x17d) * 4));
        if ((*(ushort *)(param_1 + 10) & 0x78) == 0x78) {
          *(undefined2 *)(param_1 + 0x16e) = 0xffff;
          DAT_0202ebb4 = DAT_0202ebb4 | 4;
          *pcVar4 = '\t';
          goto LAB_08017864;
        }
      }
      *pcVar4 = '\x01';
    }
LAB_08017864:
    if ((*(ushort *)(param_1 + 10) & 8) != 0) {
      sub_0800D4B4(0);
    }
    if ((*(ushort *)(param_1 + 10) & 0x10) != 0) {
      sub_0800D4B4(3);
    }
    if ((*(ushort *)(param_1 + 10) & 0x20) != 0) {
      sub_0800D4B4(1);
    }
    if ((*(ushort *)(param_1 + 10) & 0x40) != 0) {
      sub_0800D4B4(2);
    }
    goto LAB_08017ec2;
  }
  if (*pcVar4 == '\x01') {
    if (((((*(ushort *)(param_1 + 10) & 1) == 0) && (*(int *)(iVar6 + 0x58) < 0x2f001)) &&
        (0xeffff < *(int *)(iVar6 + 0x54))) && (*(int *)(iVar6 + 0x54) < 0xff001)) {
      sub_0801B51C(1,&DAT_08326318);
      iVar5 = *(int *)(*(int *)(param_1 + 0x30) + 0x18);
      *(byte *)(iVar5 + 9) = *(byte *)(iVar5 + 9) | 1;
      sub_08014FBC(&DAT_0202ed18,6);
      DAT_0202ed31 = 4;
      DAT_0202ed3a = 0;
      DAT_0202ed74 = 0xf0000;
      DAT_0202ed78 = 0xff000;
      DAT_0202ed7c = 0x20000;
      DAT_0202ed80 = 0x3c000;
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      *(undefined *)(param_1 + 0x17d) = 0;
      *pcVar4 = '\x02';
    }
    uVar2 = *(ushort *)(param_1 + 10);
    if ((((uVar2 & 2) == 0) && (*(int *)(iVar6 + 0x58) < 0x43001)) &&
       ((0x1d0fff < *(int *)(iVar6 + 0x54) && (*(int *)(iVar6 + 0x54) < 0x1e0001)))) {
      sub_0801B51C(1,&DAT_08326328);
      iVar5 = *(int *)(*(int *)(param_1 + 0x30) + 0x18);
      *(byte *)(iVar5 + 9) = *(byte *)(iVar5 + 9) | 1;
      sub_08014FBC(&DAT_0202ed18,6);
      DAT_0202ed31 = 4;
      DAT_0202ed74 = 0x1d1000;
      DAT_0202ed78 = 0x1e0000;
      DAT_0202ed7c = 0x34000;
      DAT_0202ed80 = 0x50000;
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ed3a = uVar2 & 2;
      *(undefined *)(param_1 + 0x17d) = 0;
      *(undefined *)(param_1 + 0x17c) = 3;
    }
    if (((0x2a000 < DAT_0202ed54) && (*(int *)(iVar6 + 0x58) < 0x50000)) &&
       ((0x177000 < *(int *)(iVar6 + 0x54) && (*(int *)(iVar6 + 0x54) < 0x186000)))) {
      sub_0801B51C(3,&DAT_08326338);
      sub_0801B51C(4,&DAT_08326348);
      *(undefined *)(param_1 + 0x17c) = 4;
      goto LAB_08017ec2;
    }
    if ((((*(ushort *)(param_1 + 10) & 4) == 0) && (0x63fff < *(int *)(iVar6 + 0x58))) &&
       (0x185fff < *(int *)(iVar6 + 0x54))) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832a33c);
      *(undefined *)(param_1 + 0x17c) = 5;
    }
    uVar2 = *(ushort *)(param_1 + 10);
    if ((((uVar2 & 8) == 0) && (0xe0fff < *(int *)(iVar6 + 0x54))) &&
       ((*(int *)(iVar6 + 0x54) < 0xff001 &&
        ((0x4ffff < *(int *)(iVar6 + 0x58) && (*(int *)(iVar6 + 0x58) < 0x5a001)))))) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832a3cc);
      DAT_030032e1 = DAT_030032e1 | 2;
      *(byte *)(param_1 + 0x17d) = (byte)uVar2 & 8;
      *(undefined *)(param_1 + 0x17c) = 6;
    }
    if (((((*(ushort *)(param_1 + 10) & 0x10) == 0) && (0x11cfff < *(int *)(iVar6 + 0x54))) &&
        (*(int *)(iVar6 + 0x54) < 0x13b001)) &&
       ((0x1dfff < *(int *)(iVar6 + 0x58) && (*(int *)(iVar6 + 0x58) < 0x28001)))) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832a404);
      DAT_030032e1 = DAT_030032e1 | 2;
      *(undefined *)(param_1 + 0x17d) = 1;
      *(undefined *)(param_1 + 0x17c) = 6;
    }
    if ((((*(ushort *)(param_1 + 10) & 0x20) == 0) && (0x158fff < *(int *)(iVar6 + 0x54))) &&
       ((*(int *)(iVar6 + 0x54) < 0x177001 &&
        ((0x45fff < *(int *)(iVar6 + 0x58) && (*(int *)(iVar6 + 0x58) < 0x50001)))))) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832a43c);
      DAT_030032e1 = DAT_030032e1 | 2;
      *(undefined *)(param_1 + 0x17d) = 2;
      *(undefined *)(param_1 + 0x17c) = 6;
    }
    if (((((*(ushort *)(param_1 + 10) & 0x40) == 0) && (0x194fff < *(int *)(iVar6 + 0x54))) &&
        (*(int *)(iVar6 + 0x54) < 0x1b3001)) &&
       ((0x1dfff < *(int *)(iVar6 + 0x58) && (*(int *)(iVar6 + 0x58) < 0x28001)))) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832a474);
      DAT_030032e1 = DAT_030032e1 | 2;
      *(undefined *)(param_1 + 0x17d) = 3;
      *(undefined *)(param_1 + 0x17c) = 6;
    }
  }
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\x02') {
    if ((*(char *)(param_1 + 0x17d) == '\0') && ((DAT_0202ec38 & 0x20) != 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      *(char *)(param_1 + 0x17d) = '\x01';
    }
    if ((DAT_0202ec42 & 2) != 0) {
      sub_0801B64C(1);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 1;
      sub_08014FBC(&DAT_0202ed18,3);
      DAT_0202ed31 = 4;
      DAT_0202ed3a = 0;
      *(undefined *)(param_1 + 0x17c) = 1;
    }
    goto LAB_08017ec2;
  }
  if (cVar1 == '\x03') {
    if ((*(char *)(param_1 + 0x17d) == '\0') && ((DAT_0202ec38 & 0x20) != 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      *(char *)(param_1 + 0x17d) = '\x01';
    }
    if ((DAT_0202ec42 & 2) == 0) goto LAB_08017ec2;
    sub_0801B64C(1);
    DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 2;
    sub_08014FBC(&DAT_0202ed18,3);
    DAT_0202ed31 = 4;
    DAT_0202ed3a = 0;
  }
  else {
    if (cVar1 != '\x04') {
      if ((cVar1 == '\x05') && ((DAT_0202ec38 & 0x20) != 0)) {
        sub_0801B454(&DAT_0202ec40,&DAT_0832a36c);
        DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
        DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 4;
        *(char *)(param_1 + 0x17c) = '\x01';
        goto LAB_08017ec2;
      }
      if ((*(char *)(param_1 + 0x17c) == '\x06') && ((DAT_0202ec38 & 0x20) != 0)) {
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_0801B454(&DAT_0202ec40,&DAT_0832a4ac);
        DAT_0202ec38 = DAT_0202ec38 & 0xffdf;
        DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
        sub_08014D0C(*(sbyte *)(param_1 + 0x17d) + 2);
        DAT_0202ec38 = DAT_0202ec38 | 1;
        *(ushort *)(param_1 + 10) =
             (ushort)(8 << *(sbyte *)(param_1 + 0x17d)) | *(ushort *)(param_1 + 10);
        *(char *)(param_1 + 0x17c) = '\a';
        goto LAB_08017ec2;
      }
      if (*(char *)(param_1 + 0x17c) == '\a') {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        if ((*(ushort *)(param_1 + 10) & 0x78) == 0x78) goto LAB_08017eae;
        uVar3 = 1;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) == '\b') && ((DAT_0202ec38 & 0x20) != 0)) {
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_0801B454(&DAT_0202ec40,&DAT_0832aa8c);
          DAT_0202ec38 = DAT_0202ec38 & 0xffdf;
          DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
          goto LAB_08017ec2;
        }
        if ((*(char *)(param_1 + 0x17c) != '\t') ||
           (iVar6 = sub_080EF1E8(*(int *)(iVar6 + 0x54) >> 8,0xf0), iVar6 >> 4 != 9))
        goto LAB_08017ec2;
LAB_08017eae:
        sub_0801B454(&DAT_0202ec40,
                     *(undefined4 *)(&DAT_0832ad58 + (uint)*(byte *)(param_1 + 0x17d) * 4));
        uVar3 = 8;
      }
      *(undefined *)(param_1 + 0x17c) = uVar3;
      goto LAB_08017ec2;
    }
    if ((((0x2a000 < DAT_0202ed54) && (*(int *)(iVar6 + 0x58) < 0x50001)) &&
        (0x176fff < *(int *)(iVar6 + 0x54))) && (*(int *)(iVar6 + 0x54) < 0x186001))
    goto LAB_08017ec2;
    sub_0801B64C(3);
    sub_0801B64C(4);
  }
  *(undefined *)(param_1 + 0x17c) = 1;
LAB_08017ec2:
  return (ulonglong)in_lr << 0x20;
}

