// sub_08017EE0 at 0x08017EE0 (thumb)

/* WARNING: Restarted to delay deadcode elimination for space: ram */

longlong sub_08017EE0(int param_1)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  pcVar3 = (char *)(param_1 + 0x17c);
  if (*pcVar3 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    DAT_0202ebb4 = DAT_0202ebb4 & 0xfb;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832acac);
      sub_08014D0C(1);
      *(undefined2 *)(param_1 + 10) = 0;
      *pcVar3 = '\x01';
    }
    else if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832a2e4);
      *pcVar3 = '\x01';
    }
    sub_0800D4B4(0);
    sub_0800D4B4(3);
    sub_0800D4B4(1);
    sub_0800D4B4(2);
  }
  else {
    if (*pcVar3 == '\x01') {
      if (((((*(ushort *)(param_1 + 10) & 1) == 0) && (*(int *)(iVar5 + 0x58) < 0x2f001)) &&
          (0xeffff < *(int *)(iVar5 + 0x54))) && (*(int *)(iVar5 + 0x54) < 0xff001)) {
        sub_0801B51C(1,&DAT_08326318);
        iVar4 = *(int *)(*(int *)(param_1 + 0x30) + 0x18);
        *(byte *)(iVar4 + 9) = *(byte *)(iVar4 + 9) | 1;
        sub_08014FBC(&DAT_0202ed18,6);
        DAT_0202ed31 = 4;
        DAT_0202ed3a = 0;
        DAT_0202ed74 = 0xf0000;
        DAT_0202ed78 = 0xff000;
        DAT_0202ed7c = 0x20000;
        DAT_0202ed80 = 0x3c000;
        DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
        *(undefined *)(param_1 + 0x17d) = 0;
        *pcVar3 = '\x02';
      }
      uVar2 = *(ushort *)(param_1 + 10);
      if ((((uVar2 & 2) == 0) && (*(int *)(iVar5 + 0x58) < 0x43001)) &&
         ((0x1d0fff < *(int *)(iVar5 + 0x54) && (*(int *)(iVar5 + 0x54) < 0x1e0001)))) {
        sub_0801B51C(1,&DAT_08326328);
        iVar4 = *(int *)(*(int *)(param_1 + 0x30) + 0x18);
        *(byte *)(iVar4 + 9) = *(byte *)(iVar4 + 9) | 1;
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
      if (((0x2a000 < DAT_0202ed54) && (*(int *)(iVar5 + 0x58) < 0x50000)) &&
         ((0x177000 < *(int *)(iVar5 + 0x54) && (*(int *)(iVar5 + 0x54) < 0x186000)))) {
        sub_0801B51C(3,&DAT_08326338);
        sub_0801B51C(4,&DAT_08326348);
        *(undefined *)(param_1 + 0x17c) = 4;
        goto LAB_080182b4;
      }
      if ((((*(ushort *)(param_1 + 10) & 4) == 0) && (0x63fff < *(int *)(iVar5 + 0x58))) &&
         (0x185fff < *(int *)(iVar5 + 0x54))) {
        sub_0801B454(&DAT_0202ec40,&DAT_0832a33c);
        *(undefined *)(param_1 + 0x17c) = 5;
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
    }
    else {
      if (cVar1 == '\x03') {
        if ((*(char *)(param_1 + 0x17d) == '\0') && ((DAT_0202ec38 & 0x20) != 0)) {
          DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
          *(char *)(param_1 + 0x17d) = '\x01';
        }
        if ((DAT_0202ec42 & 2) == 0) goto LAB_080182b4;
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
          }
          goto LAB_080182b4;
        }
        if (((0x2a000 < DAT_0202ed54) && (*(int *)(iVar5 + 0x58) < 0x50001)) &&
           ((0x176fff < *(int *)(iVar5 + 0x54) && (*(int *)(iVar5 + 0x54) < 0x186001))))
        goto LAB_080182b4;
        sub_0801B64C(3);
        sub_0801B64C(4);
      }
      *(undefined *)(param_1 + 0x17c) = 1;
    }
  }
LAB_080182b4:
  return (ulonglong)in_lr << 0x20;
}

